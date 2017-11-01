#include<stdio.h>

int main()
{
	int a[] = {1,2,3,4,5,6};
	int size = abs(((int *)&a - (int *)(&a + 1))) - 1;
//	int size = abs((&a - (&a + 1))) - 1;
	printf("%d\n",size);
//	printf("%d %d",size,((unsigned int *)&a+1 - (unsigned int *)&a));
}
