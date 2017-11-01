#include<stdio.h>
int main()
{
  int i = 'c';
  register  *a = &i;

  printf("%d", *a);
  getchar();
  return 0;
}
