#include<stdio.h>

int main()
{
	int arr[] = {5,1,3,1,34,6,2,42,12};
	int i,temp_m = arr[0],temp_n = arr[1];
	for(i = 2 ; i < 8; i++ )
	{
		if(temp_m < arr[i]){
			temp_n = temp_m;
			temp_m = arr[i];
		}
	}
	printf("%d   %d ",temp_m,temp_n);
}
