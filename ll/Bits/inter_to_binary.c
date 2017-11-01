#include<stdio.h>
void Integer_Binary(unsigned int num)
{
	unsigned int i,temp = 0,base =1,count = 0,flag = 0 , count1 = 0;
	for(i = 0 ; i < 32 ; i++){
		if(num & (1 << i)){
			flag = 1;
			count++;
		}
		else{
			if(flag == 1){
				count += count1;
				count1 = 0; 
				flag = 0;
			}
			count1++;
		}
	}			
	for(i = 0 ; i < count ; i++)
	{
		if(num & (1 << i))
			temp = temp + base * 1;
		base = base * 10;
	}
	printf("%d __%d\n",temp,num);
}
int main()
{
	int i;

	for(i = 0 ; i < 255 ; i++ )
		Integer_Binary(i);
}
