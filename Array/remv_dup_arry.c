#include<stdio.h>

void remove_dup(int *arr, int size){
	int *temp = arr;
	while(size--) *arr++ = *(++temp);	
//	for(ar_i = size ; ar_i < size ; ar_i++){
//		arr[ar_i] = arr[ar_i + 1];
	
//	printf("\n");
}
int main(){
	
	int arr[] = {1,21,4,2,1,4,1,31,3,42,1,5,21,21,21,21,12,12,12,12,21};
	int ar_i, ar_j,size,*ptr = NULL,count = 0,*ptr_rv = ptr;
	size = sizeof(arr)/ sizeof(int);
	ptr = (int *)&arr[size -  1] ;
	for(ar_i = 0; ar_i < size ; ar_i++){
		for(ar_j = ar_i + 1 ; ar_j < (size/2) + 1; ar_j++){
			count++;
			if(arr[ar_i] == arr[ar_j]){
				remove_dup(&arr[ar_j],(size - count) ); size--;
			}
			if(*ptr == arr[ar_i] || *ptr == arr[ar_j]){
				remove_dup(ptr, count - 1); size--;
			}
			if(*ptr == arr[size - ar_j - 1])
				remove_dup(--ptr, count - 1); size--;
			ptr--;
			ptr_rv--;
		}
		ptr = (int *)&arr[size -1];
//		ptr_rv = ptr;
		count = 0;
	}
	for(ar_i = 0 ; ar_i < size +4; ar_i++)
		printf("%d\t",arr[ar_i]);
	printf("\n");
}
