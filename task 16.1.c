#include <stdio.h>
 
void print(char text[])
{
    printf(text);
}
 
int main(void)
{
    print("Привет \n");
    print("Пока \n");
    return 0;
}