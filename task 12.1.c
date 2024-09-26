#include <stdio.h>
 
int main()
{
    char *person[] = {"Вова", "Сережа", "Арина"};
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", person[i]);
    }

    return 0;
}