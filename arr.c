#include<stdio.h>

int main()
{
	int arr [] = {1,2,3,4};
	int *p,*p1 ;
	p = arr;
	p1 = &arr[2];
	printf("%d\n",*(p1+1));
}
