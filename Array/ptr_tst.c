#include<stdio.h>
int main()
{
	int arr[] = {2,1,1,1,4,5};
	int ar_i;
	int *ptr = arr;
	for(ar_i = 0 ; ar_i < 5;ar_i++)
	{
		if(*ptr == *++ptr)	printf(" %d\n",ar_i);			
	}
}
