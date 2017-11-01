#include<stdio.h>

int main()
{
	unsigned int num = 5;
	unsigned int res = ((num & 0xAAAAAAAA) >> 1) | ((num & 0x55555555) << 1);
	printf("%d\n",res);
}
