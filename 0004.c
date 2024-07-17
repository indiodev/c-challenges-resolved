// Desenvolver um algoritmo que leia um número X
// e calcule o valor de Y seguindo:
// Y = X, se X < 1
// Y = 0, se X = 1
// Y = X ** 2, se X > 1
#include <stdio.h>

int main()
{
  int x, y;

  printf("Informe um valor: ");
  scanf("%d", &x);

  if (x < 1)
  {
    y = x;
    printf("Y = %d\n", y);
    return 0;
  }

  if (x == 1)
  {
    y = 0;
    printf("Y = %d\n", y);
    return 0;
  }

  y = x * x;

  printf("Y = %d\n", y);
  return 0;
}