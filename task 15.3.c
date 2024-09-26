#include <stdio.h>
 
unsigned long long  int factorial(unsigned n)
{
  unsigned long long result = 1;
  for(unsigned i=1; i<=n; i++)
  {
      result *= i;
  }
  return result;
}
 
 
int main(void)
{
    printf("Фактариал 7: %lld\n", factorial(7));
    printf("Фактариал 3: %lld\n", factorial(3));
    printf("Фактариал 7=9: %lld\n", factorial(9));
    return 0;
}