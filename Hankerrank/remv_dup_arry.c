#include<stdio.h>

void remove_dup(int *arr, int size){
	//size--;	
	while(size--){
		*arr++ = *(++arr);
	//	printf("__%d  %d\n",*--arr,size);
		
	}
}
int main(){
	
	int arr[] = {1,21,4,2,1,4,1,31,3,42,1,31};
	int ar_i, ar_j,size,*ptr = NULL,count = 0;
	size = sizeof(arr)/ sizeof(int);
	ptr = (int *)&arr[size -  1] ;
	for(ar_i = 0; ar_i < size ; ar_i++){
		for(ar_j = ar_i + 1 ; ar_j < (size/2) ; ar_j++){
			count++;
			if(arr[ar_i] == arr[ar_j]){
				remove_dup(&arr[ar_j],size - count);
					size--;
			}
			else if(*ptr == arr[ar_i]){
				remove_dup(ptr, count);
					size--;
			}
			//printf("%d hi ptr\n",*ptr);
			ptr--;
		}
	}
	for(ar_i = 0 ; ar_i < size; ar_i++)
		printf("%d\n",arr[ar_i]);
}
