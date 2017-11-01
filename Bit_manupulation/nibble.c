#include<stdio.h>


int main()
{
	int num = 512,i = 0,temp = 0;
	while(i <= 12){
		temp |= (((num & (0xf0 << i + i)) >> 4) | ((num & (0x0f << i + i)) << 4)) ;
//		temp |= ((num & (0x0f << i + i)) << 4); 			
		i+= 4;
	}
	printf("%d\n",temp);
}
