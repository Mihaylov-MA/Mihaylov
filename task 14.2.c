#include <stdio.h>
 
void print_number(const int n)
{
    printf("%d\n", n * 2);
}
 
int main(void)
{
    print_number(2);
    return 0;
}