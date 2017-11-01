#include<stdio.h>

int main()
{
	int i,arr[] = {-12,-19,-1,4,-7,-8,-13,6,7,-16,-11,-5,3,-100,-120,10};
//	int i,arr[] = {12,-19,-1200,-21,-1000,-100,-120};
	int len = sizeof(arr)/4;
	int min = arr[0],temp=arr[1];
	printf("%d\n",len);
	for(i = 0; i <= len  ; i++){
		if(arr[i] < arr[i + 1] && arr[i] < min ) {
			if(temp < arr[i]){
				min = arr[i];
				printf("%d %d %d\n",min,temp,i);
				continue;
			}
			else{
				min = temp;
				temp = arr[i];
				printf("%d %d %d\n",min,temp,i);
			}
			printf("%d %d\n",min,temp);
		}
	}
	printf("%d %d\n",min,temp);
}
