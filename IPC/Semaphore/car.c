#include <unistd.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <sys/types.h> 
#include <sys/ipc.h> 
#include <sys/sem.h> 
#define STUDENTIDNUMBER 830

union semun { 
	int val ; 
	struct semid_ds * buf ; 
	ushort *array; 
	struct seminfo *__buf;      
}; 

main() 
{ 
	key_t key =STUDENTIDNUMBER; 
	int semid ; 
	int car_num =1; 
	static struct sembuf sig ={0,1,SEM_UNDO}, wait={0,-1,SEM_UNDO}; 

	enum {NS,EW}; 
	if(( semid = semget (key,2,IPC_CREAT|0666))==-1) { 
		perror ("car: semget ."); 
		exit(1); 
	} 
	while(1) { 
		wait.sem_num = NS; // car does wait operation on 
		printf("NS________________%d\n",NS);	
		if( semop (semid,&wait,1)==-1){ 
			perror ("car: semop --wait."); exit(2); 
		} 
		printf("NS________________%d\n",NS);	
		printf ("car: The road from north to south is open.\n"); 
		sleep(1); 
		printf ("car: Car %d passed.\n",car_num ++); //car passed. sig.sem_num =EW; 
		sig.sem_num = EW;  // Give a signal for EW
		printf("EW________________%d\n",EW);	
		if( semop (semid,&sig,1)==-1) { 
			perror ("car: semop --signal."); 
			exit(3); 
		} 
	}// end of while. 
}
