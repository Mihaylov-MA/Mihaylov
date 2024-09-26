#include <stdio.h>
 
int main(void)
{
    const long n = 123;
    const long *pn = &n;
    char *const hello = "Hello";
    printf("Константа: %ld\n", *pn);
    printf("Константный указатель: %s\n", hello);
    return 0;
}