#include <stdio.h>

#include "include/util.h"

Mes months[MAX_MONTHS] = {
    {"janeiro", 31},
    {"fevereiro", 28},
    {"março", 31},
    {"abril", 30},
    {"maio", 31},
    {"junho", 30},
    {"julho", 31},
    {"agosto", 31},
    {"setembro", 30},
    {"outubro", 31},
    {"novembro", 30},
    {"dezembro", 31},
};

int main()
{

  int year;
  char mes[10];

  printf("informe o mes: ");
  scanf("%s", mes);

  printf("informe o ano: ");
  scanf("%d", &year);

  _Bool isLeapYear = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

  if (isLeapYear)
  {
    months[1].days = 29;
  }

  _Bool isValidMonth = monthIsValid(mes, months);

  if (!isValidMonth)
  {
    printf("O mês informado é inválido\n");
    return 0;
  }

  Mes *found = getMonth(mes, months);

  if (found == NULL)
  {
    printf("O mês informado não existe\n");
    return 0;
  }

  printf("O mês %s do ano %d tem %d dias\n", found->name, year, found->days);

  return 0;
}
