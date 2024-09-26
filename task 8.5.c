#include <stdio.h>
  
int main(void)
{
    float F, M;
    printf("введите длинну в футах: ");
    scanf("%f",&F);
    M = F / 3.281;
    printf("Длинна в метрах: %f\n",M);
    return 0;
}