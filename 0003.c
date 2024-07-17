// Escreva um algoritmo que leia os coeficientes (a,b,c) de uma equação do segundo grau
// (ax² + bx + c = 0) e imprima suas raízes.
#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, delta, x[2];

  printf("Informe valor para A: ");
  scanf("%f", &a);

  printf("Informe valor para B: ");
  scanf("%f", &b);

  printf("Informe valor para C: ");
  scanf("%f", &c);

  delta = (b * b) - (4 * a * c);

  if (delta < 0)
  {
    printf("Esta equação não possui raízes reais");
    return 0;
  }

  if (delta == 0)
  {
    x[0] = -b / (2 * a);
    printf("Esta equação possui uma raiz real: %.2f", x[0]);

    return 0;
  }

  x[0] = (-b + sqrt(delta)) / (2 * a);
  x[1] = (-b - sqrt(delta)) / (2 * a);
  printf("Esta equação possui duas raízes reais: %.2f e %.2f", x[0], x[1]);

  return 0;
}