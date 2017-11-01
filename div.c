#include<stdio.h>
int divide(int nu, int de) {

    int temp = 1;
    int quotient = 0;

    while (de <= nu) {
        de <<= 1;
        temp <<= 1;
    }

    printf("%d %d\n",de,temp,nu);
    while (temp > 1) {
        de >>= 1;
        temp >>= 1;

            printf("_%d %d\n",de,temp);
        if (nu >= de) {
            nu -= de;
            printf("__%d %d %d\n",quotient,temp,nu);
            quotient += temp;
        }
    }

    return quotient;
}
int main()
{
	int r = divide(10,2);
	printf("%d\n",r);
}
