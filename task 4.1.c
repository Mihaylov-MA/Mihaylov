#include <stdio.h>
  
int main(void)
{
    //Обмен через третью переменную
    printf("a=10, ");
    printf("b=4\n");
    int a1 = 10;
    int b1 = 4;
    int c1 = a1;
    a1 = b1;
    b1 = c1;
    printf("a=b=%d \n", a1);
    b1 = c1;
    printf("b=c=%d \n", b1);
    
    //Обмен без третьей переменной
    int a2 = 10;
    int b2 = 4;
    a2 = a2 + b2;
    printf("a=a+b=%d \n", a2);
    b2 = a2 - b2;
    printf("b=a-b=%d \n", b2);
    a2 = a2 - b2;
    printf("a=a-b=%d \n", a2);
    
    //Обмен через операцию XOR
    int a3 = 10;
    int b3 = 4;
    a3 = a3 ^ b3;
    printf("a=a^b=%d \n", a3);
    b3 = a3 ^ b3;
    printf("b=a^b=%d \n", b3);
    a3 = a3 ^ b3;
    printf("a=a^b=%d \n", a3);
    
    //Обмен с помощью одного выражения
    int a4 = 10; 
    int b4 = 4;     
    a4= a4+b4-(b4=a4)
    printf("a= a+b-(b=a)=%d \n", a4);
}