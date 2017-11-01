#include<stdio.h>

int main()
{
	int arr[] = {1,2,1,2,1,3,1,3,1,3,4,2,4,1};
	int size = (sizeof(arr)/4) - 1;
	int *ptr_arr =(int *)( &arr + 1 ) -1;
	int *ptr1_arr = ptr_arr - 1;	
	printf("%d %d %d\n",*ptr_arr,*ptr1_arr,size);
	int i,j,count = 0;
	printf("%d %d\n",ptr_arr,ptr_arr - 1);
	for(i = 0 ; i < size/2; i++)
	{
		count++;
		if(arr[i] == arr[i+1])
		{
			if(arr[i] == *ptr_arr)
			{
			
				size = size - 1;
				ptr_arr -= 1; 	
			}
			for(j = i+1 ; j < size ; j++)
			{
					
			}
		}	
	}
}
