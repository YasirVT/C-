#include <stdio.h>

 int a;

int compute(void);

int main()
{
    a = 1;
    printf("%d %d\n", a, compute());
    return 0;
}
