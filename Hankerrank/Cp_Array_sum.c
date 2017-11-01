#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int simpleArraySum(int n, int ar_size, int* ar) {

	int i,ar_half_size = ar_size/2 ;
	int *ptr_end = NULL,*ptr = NULL,*ptr_mid_right = NULL,*ptr_mid_left = NULL,sum = 0 ;
	ptr = (int *)&ar[ar_size - 1];
	if(ar_size % 2 == 1){
		ar_size +=  1 ; 
		printf("%d %d\n",*ptr_mid_right,ptr_mid_right = (int *)&ar[ar_half_size] + 1);	
		ptr_mid_left = (int *)&ar[ar_half_size] + 1;	
	}
	else{
		printf("%d %d %d\n",ar[1],*ptr_mid_right,ptr_mid_right = (int *)&ar[ar_half_size ] -1) ;	
		printf("%d %d %d\n",ar[2],*ptr_mid_left,ptr_mid_left = (int *)&ar[ar_half_size ] ) ;	
		//ptr_mid_left = (int *)&ar[ar_half_size ] + 1 ;	
	}
	for(i = 0; i < ar_half_size / 2; i++){
		if(ptr_mid_right == ptr_mid_left){
			sum += *ptr_mid_left--;
				ptr_mid_right++;
		}
		else
			sum += ar[i] + *ptr_mid_right++ + *ptr_mid_left-- + *ptr--;
	}
	return sum; 

}

int main() {
	int n,ar_i; 
	scanf("%i", &n);

	int *ar = malloc(sizeof(int) * n);

	for(ar_i = 0; ar_i < n; ar_i++){
		scanf("%i",&ar[ar_i]);

	}
	int result = simpleArraySum(n, n, ar);
	printf("%d\n", result);
	return 0;
}
