#include<stdio.h>
#include"header.h"
int global_variable = 37;    /* Definition checked against declaration */

int increment(void) { return ++global_variable; }

int main()
{
	printf("%d\n",increment());
}

