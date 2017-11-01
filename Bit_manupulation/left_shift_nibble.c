#include<stdio.h>

int main()
{
	unsigned int num = 11;
	printf( "%d\n",(num & 0xAAAAAAAA) >> 1); 
	printf("%d\n",((num & 0x55555555) << 1);
}
