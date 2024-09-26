#include <stdio.h>
 
int main()
{
    int n = 10;
    int *pn = &n;
    printf("До изменения: %d \n", *pn);
    *pn = 22;
    printf("После изменения: %d \n", *pn);
    return 0;
}