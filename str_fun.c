#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct y{
//	char *str;
	void (*fun)();
}istr;

void fun(){
	printf("hiii..\n");
	FILE *fp = fopen("Yas.txt","r+");
	char ch;
	while((ch = fgetc(fp)) != EOF){
		printf("%c",ch);
//		printf("hi");
	}	
	char str[] = "Yasir NL";	
	fputs(str,fp);
}
int main()
{
	istr *s =(istr *) malloc(sizeof(istr));
	s -> fun = &fun;
	s-> fun();
		
}
