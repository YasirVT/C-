#include<stdio.h>

int main()
{
//	int i,arr[] = {-5,-4,-3,-2,-1};
	int i,arr[] = {12,-19,-1200,-21,-1000,-100,-120};
	int len = sizeof(arr)/4;
	int sec_min = arr[0],first_min=arr[1];
	int *arr_ptr = NULL;
	arr_ptr =(int *) &arr[len -1];
//	printf("Im here\n");
	for(i = 0; i < len/2 + 1 ; i++){
		if( arr[i] < first_min || *arr_ptr < first_min ){
			if(*arr_ptr < arr[i]){
				sec_min = first_min;
				first_min = *arr_ptr;
			}
			else{
				sec_min = first_min;
				first_min = arr[i];
			}
		}
		else if( arr[i] < sec_min || *arr_ptr < first_min){
			if(*arr_ptr < arr[i])
				sec_min = *arr_ptr;
			else
				sec_min = arr[i];
		}
		printf("__%d\n",arr[i]);	
		printf("%d\n",*arr_ptr);	
		arr_ptr--;
	}
	printf("%d %d\n",first_min,sec_min);
}
