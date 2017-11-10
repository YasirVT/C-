#include<stdio.h>

int main()
{
	FILE *fp ;
	fp = fopen("Yasir.txt", "r+");
	if(!fp)
		printf("file opening filed\n");
	char ch,i = 1,flag = 0,name_str[] = "Yasir",tmp_str[5],replace_str[] = "Uwais";
	while((ch = fgetc(fp)) != EOF ){
		if(ch == 'Y' || ch == 'y'){
			while(i){
				i = 0;
				ch = fgetc(fp);
				if(ch == ' ' || ch == '\n' || ch == name_str[4])
					break;
				else if(ch == name_str[i++])
					if(name_str[i - 1] == name_str[4]){ flag = 1; i = 1 ; break;	 }
			}	
			fseek(fp, -5 , SEEK_CUR);
			for(i = 0 ; i < 5 ; i++){
				fputc(replace_str[i],fp);
			}	
		}
	}
}
