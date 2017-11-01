#include<stdio.h>


int main()
{
	int n = 11;
	int x = 2;
	n ^= (1 << x);
	printf("%d\n",n);
}
