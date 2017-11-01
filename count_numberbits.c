#include<stdio.h>
int numberOfSetBits(int i)
{
	//int i=10;
     // Java: use >>> instead of >>
     // C or C++: use uint32_t
     i = i - ((i >> 1) & 0x55555555);
     i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
	//printf("%d",i);    
 return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
	
}
int main()
{
	int a;
	printf("%d\n",numberOfSetBits(11));
}