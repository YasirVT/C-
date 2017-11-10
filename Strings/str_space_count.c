#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "abc 1234 bcd";
	int size = 0,i;
	int str_len = strlen(str);
	char *ptr[size],str[str_len];
	for(i = 0 ;i < str_len ; i++){
		if(str[i] == ' ')
			if(str[i] != ' ' && str[i] != '\0'){
				ptr[size++] = &str[i]; 	
			}
	}	
	while(size >= 0){
		
	}
}
