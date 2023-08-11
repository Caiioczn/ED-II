#include "Stack.h"
#include "meutipo.h"
#include <stdio.h>

int main(void) {
  Stack *piula1 = Stack_create();
  for (int i = 0; i < 12; i++) {
    MeuTipo temp;
    temp.id = i;
    sprintf(temp.name, "Individuo num %i", i);
    if (!Stack_push(piula1, temp))
      printf("Stack ovrflowrflow ao tentar inserir %d\n", i);
  }
  MeuTipo temp;
  while (Stack_pop(piula1, &temp))
    printf("Valor removido: %d, %s\n", temp.id, temp.name);
  return 0;
}