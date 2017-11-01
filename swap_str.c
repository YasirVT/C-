#include<stdio.h>

int main()
{
	char *a = "hello";
	char *b = "world";
	a = a + (a-b);
	b = a - (a-b)/2;
	a = a - (a-b)*2;
	printf(" a = %s b = %s ",a,b);
	return 0;
}
