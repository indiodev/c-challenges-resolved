#include <stdbool.h>

typedef struct
{
  char name[10];
  int days;
} Mes;

#define MAX_MONTHS 12

_Bool monthIsValid(char *month, Mes *months);
Mes *getMonth(char *month, Mes *months);