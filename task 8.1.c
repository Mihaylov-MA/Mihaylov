#include <stdio.h>
  
int main(void)
{
    int a;
    double b;
    printf("Введите а:");
    scanf("%d", &a);
 
     
    printf("Введите b:");
    scanf("%lf", &b);
     
    printf("a: %.2lf \tb: %d \n", a, b);
    return 0;
}