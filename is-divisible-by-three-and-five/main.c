#include <stdio.h>

int main()
{
  int number;

  printf("Informe um número inteiro: ");
  scanf("%d", &number);

  _Bool isDivisibleByThreeAndFive = number % 5 == 0 && number % 3 == 0;

  if (!isDivisibleByThreeAndFive)
  {
    printf("%d não é divisível por 5 e 3 ao mesmo tempo\n", number);
    return 0;
  }

  printf("%d é divisível por 5 e 3 ao mesmo tempo\n", number);

  return 0;
}