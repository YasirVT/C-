#include<stdio.h>

int main()
{
	int x=4881;
	if(((x >> 3) << 3)==x)
		printf("Yes");
}
