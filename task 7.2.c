#include <stdio.h>
  
int main()
{
    int numbers[] = {1, 2, 3, 4};
    numbers[0] = numbers[0] * 2;
    numbers[3] = numbers[3] * 2;
    for(int i = 0; i < 4; i++)
    {
        printf("%d", numbers[i]);
    }
    return 0;
}