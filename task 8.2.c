#include <stdio.h>
  
int main(void)
{
    char buffer[10];
    int a;
    double b;
    printf("Введите а и b:");
    if (fgets(buffer, 10, stdin) != NULL)
    {
        sscanf(buffer, "%d %lf", &a, &b);
        printf("a: %.2lf \tb: %d \n", a, b);
    }
    else
    {
        printf("Fatal Error!\n");
    }
    return 0;
}