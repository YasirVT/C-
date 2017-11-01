#include<stdio.h>

int main()
{
	int num = 15,count = 0,i;;
	for(i = 0; i < 32 ; i++)
		if(num & (1 << i))
			count++;
	printf("%d\n",count);
}
