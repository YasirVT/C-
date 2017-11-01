#include<stdio.h>
int fun1(int *num){
	printf("Hello\n");
	return num;
}
int * fun(int *num){
	(*num)++;
	(*num)++;
	printf("HI\n");
	return(fun1(num));
}
int main()
{
	int num = 2;
	int *n = fun(&num);
	printf("_i_%d\n",*n);
	printf("%d\n",num);
	
}
