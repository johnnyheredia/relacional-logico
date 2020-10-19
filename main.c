#include <stdio.h>

int main(void) {
  int variable1;
  int variable2;

  printf("Ingresa el primer numero: ");
  scanf("%i", &variable1);

  printf("Ingresa el segundo numero: ");
  scanf("%i", &variable2);

  if (variable1 < variable2)
    printf("Es menor: %i", variable1);
  else
    printf("Es menor: %i", variable2);
  return 0;
}