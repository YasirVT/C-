#include <stdio.h>

char * fun(void)
{
  char c[] = "VotaryTech";
  char *p = c;
//  c++;
  p++;
  p[5] = 65;
  return c;
}
int main()
{
 char* t =  fun();
 printf("\n%s\n", t);
}
