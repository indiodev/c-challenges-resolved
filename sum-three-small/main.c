// Dados quatro números distintos, desenvolver um
// algoritmo que determine e imprima a soma dos três menores

#include <stdio.h>

#define MAX_NUMBERS 4

int main()
{
  int sum = 0, index = 0, max = 0, numbers[MAX_NUMBERS];

  do
  {
    printf("Informe um número: ");
    scanf("%d", &numbers[index]);

    if (numbers[index] > max)
      max = numbers[index];

    index++;
  } while (index < MAX_NUMBERS);

  index = 0;

  while (index < MAX_NUMBERS)
  {

    if (numbers[index] != max)
      sum += numbers[index];

    index++;
  }

  printf("Soma dos três menores: %d\n", sum);

  return 0;
}