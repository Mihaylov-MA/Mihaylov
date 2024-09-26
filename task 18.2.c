#include <stdio.h>
  
#define MAX(a,b) (a > b ? a : b)
  
int main(void)
{
    int x = 5;
    int y = 7;
    printf("%d \n", MAX(x,y));
    return 0;
}