#include<stdio.h>

int main()
{
	int num = 8 ,bin = 0, i ,base = 1;
	while()
	{
		if(num & (1 << i++))
			bin = bin + base * 1;	
		base = base * 10 ;
	}
	printf("%d %d\n",bin,i);
}
