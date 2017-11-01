#include<stdio.h>
static a;
int b;
void fub()
{
//	printf("%d %d\n",b =4,&b);
	printf("%d %d\n",a =10,&a);;
}
void fun()
{
	static c;
	printf("c is %d\n",&c);
	printf("%d %d\n",b =4,&b);
	printf("%d %d\n",a =10,&a);;
}
int main()
{
	fub();
	fun();
}
