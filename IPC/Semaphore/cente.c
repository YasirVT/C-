#include <unistd.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <sys/types.h> 
#include <sys/ipc.h> 
#include <sys/sem.h> 
#define STUDENTIDNUMBER 830
union semun {
	int val;
	struct semid_ds * buf;
	ushort *array; 
	struct seminfo *__buf;      
}; 

main() 
{ 
	static ushort startVal [2]={0,0}; 
	key_t key = STUDENTIDNUMBER; 
	int semId; 
	union semun arg ; 
	enum {NS ,EW}; 
	static struct sembuf sig ={0,1,SEM_UNDO}, wait={0,-1,SEM_UNDO}; 
	struct sembuf { 
		ushort sem_num; // semaphore No. 
		short sem_op;   // 1 signal, -1 wait operation 
		short sem_flag; //operation flags 
	};
	int clock=3; 
	if(( semId = semget (key,2,IPC_CREAT|0666))==-1) { 
		perror (" centre : semget ."); 
		exit(1); 
	} 
	arg.array = startVal ; // used to initialize semaphore.. this is a
	if( semctl (semId,0,SETALL,arg)==-1) { 
		perror (" centre : semctl --initialization."); exit(2); 
	} 
	printf (" centre : I am ready.\n"); 
	while(clock) { 
		sig.sem_num = NS; /* centre does a signal operation on semaphore NS and road from N to S is open. */ 
                printf("NS________________%d\n",NS);
		if( semop (semId,&sig,1)==-1) { 

			perror (" centre : semop --signal."); 
			exit(3); 
		} 
                printf("NS________________%d\n",NS);
		wait.sem_num = EW; 
                printf("EW________________%d\n",EW);
		if( semop (semId,&wait,1) == -1) { 
			perror (" centre : semop --wait."); 
			exit(4); 
		} 
		printf("hi im here\n"); 
		printf (" centre : The road from east to west is open.\n"); 
		//sleep(1); 
		clock--; 
	}//end of while 

	if( semctl (semId,0,IPC_RMID,0)==-1) { 
		// remove semaphore set. 
		perror (" centre : semctl --remove."); 
		exit(5); 
	} 
	exit(0); 
}//end of main.       

