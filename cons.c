#include <stdio.h>

int main()
{
	int const a;
	int *p ;
	p = &a;
	*p =10;
	printf("%d %d\n",a,*p);
}
