#include<stdio.h>

int main()
{
	int arr[] = {1,2,1,2,1,3,1,3,1,3,4,2,4,1};
	int size = (sizeof(arr)/4) - 1;
	int *ptr_arr =(int *)( &arr + 1 ) -1;
	int *ptr1_arr = ptr_arr - 1;	
	//printf("%d %d %d\n",*ptr_arr,*ptr1_arr,size);
	int i,j,count = 0,k;
	for(i=0;i<size;i++)
		printf("%d\t",arr[i]);
	printf("\n\n");	
	for(i = 0 ; i <= size; i++)
	{
		//	printf("%d firtand\n",arr[i]);
		for(j=i+1 ; j <= size ; ){	
			//	printf("%d firtand %d\n",arr[i],arr[j]);
			if(arr[i] == arr[j])
			{
				//					printf("%d and %d\n",arr[i],arr[j]);
				for(k=j ; k <= size ;k++)
				{
					if(arr[i] == arr[k+1]){
						count++;
						printf("____%d and  %d\t",arr[k+1],count);
						printf("\n\n");
						continue;
					}
					else{
						printf("__%d\t",count);
						arr[k] = arr[k+count];
						size -= count;
						count = 0;
					}
				}	
				size -= 1;
			}
			else
				j++;
		}
	}
	for(i=0;i<=size+2;i++)
		printf("%d\n",arr[i]);
}
