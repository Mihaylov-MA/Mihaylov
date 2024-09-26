#include <stdio.h>
 
int main(void)
{
  int a = 3, b = 7, c = 5;
  int max = c; 
 
  if(a>b && a>c)
    max=a;
  else if(b>a && b>c)
    max=b;
 
  printf("Max: %d",max);
  return 0;
}