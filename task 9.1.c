#include <stdio.h>
 
int main()
{
    int n = 10;
    int *pn = &n;
    printf("Address: %p \n", (void *)pn);
    printf("Value: %d \n", *pn);
    return 0;
}