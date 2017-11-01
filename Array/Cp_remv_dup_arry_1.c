#include<stdio.h>

void remove_dup(int *arr, int size){
	int *temp = arr;
	while(size--) *arr++ = *(++temp);	
//	for(ar_i = size ; ar_i < size ; ar_i++){
//		arr[ar_i] = arr[ar_i + 1];
	
//	printf("\n");
}
int main(){
	
	int arr[] = {1,1,1,1,1,4,2,1,4,1,31,3,42,1,5,21,21,21,21,12,12,12,12,21};
	int ar_i,shift = 1, ar_j,size,*ptr = NULL,count = 0,*ptr_rv = NULL;
	size = sizeof(arr)/ sizeof(int);
	ptr = (int *)&arr[size -  1] ;
	for(ar_i = 0; ar_i < size ; ar_i++){
		for(ar_j = ar_i + 1 ; ar_j < (size/2) + 1; ar_j++){
			count++;
			if(arr[ar_i] == arr[ar_j]){
				remove_dup(&arr[ar_j],(size - count) ); shift++; size--;
			}
			if(arr[size - 1 - shift] == arr[ar_i] || arr[size - 1 - shift] == arr[ar_j]){
				remove_dup(&arr[size - 1 - shift], count - 1); size--; shift++ ; 
			}
			if(arr[size - 1 - shift] == arr[size - 2 - shift]){
				printf("%d %d \n",arr[size - 1 - shift],arr[ size - 2 - shift]);
				remove_dup(&arr[size - 1 - shift], count - 1); size-- , shift++; 
			}
		}
		count = 0;
	}
	for(ar_i = 0 ; ar_i < size ; ar_i++)
		printf("%d\t",arr[ar_i]);
	printf("\n");
}
