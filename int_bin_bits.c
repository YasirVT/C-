#include<stdio.h>

int int_bin(int num)
{
	unsigned int i , bin = 0,base = 1; ;
	for(i = 0; i < 32 ; i++){
		if(num & (1 << i)){
		}
		base = base * 10;
	}
	return bin;
}
int main()
{
	int num;
	scanf("%d",&num);
	int res = int_bin(num);
	printf("%d\n",res);
}
