// Desenvolver um algoritmo leia o mes e ano e mostre quantos dias ele tem
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
  char name[10];
  int days;
} Mes;

#define MAX_MONTHS 12

_Bool monthIsValid(char month[10]);
Mes *getMonth(char month[10]);

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

  _Bool isValidMonth = monthIsValid(mes);

  if (!isValidMonth)
  {
    printf("O mês informado é inválido\n");
    return 0;
  }

  Mes *found = getMonth(mes);

  if (found == NULL)
  {
    printf("O mês informado não existe\n");
    return 0;
  }

  printf("O mês %s do ano %d tem %d dias\n", found->name, year, found->days);

  return 0;
}

_Bool monthIsValid(char month[10])
{
  for (int index = 0; index < MAX_MONTHS; index++)
    if (strcmp(month, months[index].name) == 0)
      return true;

  return false;
}

Mes *getMonth(char month[10])
{
  for (int index = 0; index < MAX_MONTHS; index++)
    if (strcmp(month, months[index].name) == 0)
      return &months[index];

  return NULL;
}
