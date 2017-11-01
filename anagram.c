#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	scanf("%s%s",str1,str2);
	int  i,count = 0,flag = 0, j = 0;;
	int len = strlen(str1);
	for(i = 0; i < strlen(str1) ; i++){
		if(str1[i] == str2[i])
			count++;
		else{
			flag = 0;
			for(j = 0 ; j < strlen(str2) / 2; j++){
				if(str1[i] == str2[len - 1 - j] || str1[i] == str2[j]){
					flag = 1;
					break;
				}		
			}
		}
		if(flag != 1){
			printf("%d\n",-1);
			return 0;
		}
	}
	printf("%d",count);
}
