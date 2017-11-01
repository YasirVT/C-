#include<stdio.h>

int main()
{
	int arr[] = {1,23,4,6,1,4,2,42,2};
	int *ptr = NULL;
	ptr =(int *) (&arr + 1) - 1;
	printf("%d %d\n",arr,*ptr);
	int size = (sizeof(arr)/4) -1;	
	int half_size = (size/2) +1;
	int i;	
	for(i = 0 ;i < half_size ; i++)
	{
		for(j = i+1;j < half_size ; j++)
		{
			if(arr[i] == arr[j])
			{
				
			}
			else if(a)
		}
	}
}
