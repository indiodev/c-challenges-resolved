// Desenvolver um algoritmo que leia um número
// inteiro e verifique se o mesmo é divisível por
// 5 e por 3 ao mesmo tempo

#include <stdio.h>

int main()
{
  int number;

  printf("Informe um número inteiro: ");
  scanf("%d", &number);
  _Bool isDivisibleByFiveAndThree = number % 5 == 0 && number % 3 == 0;

  if (isDivisibleByFiveAndThree)
    printf("%d é divisível por 5 e 3 ao mesmo tempo\n", number);

  if (!isDivisibleByFiveAndThree)
    printf("%d não é divisível por 5 e 3 ao mesmo tempo\n", number);

  return 0;
}