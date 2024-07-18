#include <string.h>

#include "util.h"

_Bool monthIsValid(char *month, Mes *months)
{
  for (int index = 0; index < MAX_MONTHS; index++)
    if (strcmp(month, months[index].name) == 0)
      return true;

  return false;
}

Mes *getMonth(char *month, Mes *months)
{
  for (int index = 0; index < MAX_MONTHS; index++)
    if (strcmp(month, months[index].name) == 0)
      return &months[index];

  return NULL;
}