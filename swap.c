#include<stdio.h>
int main()
{
	char* s1 = "Hello";
	char* s2 = "World";
	s1 = (char*)((int)s1 + (int)s2);
	s2 = (char*)((int)s1 -(int) s2);
	s1 = (char*)((int)s1 - (int)s2);
	printf("%s:%s", s1, s2);
}
