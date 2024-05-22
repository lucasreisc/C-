#include <stdio.h>
#include <stdlib.h>

int main (void) {
  
  int areaLos;
  int maiorLos;
  int menorLos;

  printf ("Digite o valor da diagonal maior: ");
  scanf ("%d" , &maiorLos);

  printf ("Digite o valor da diagonal menor: ");
  scanf ("%d", &menorLos);

  areaLos = (maiorLos * menorLos) / 2 ;

  printf( "Area = %d", areaLos);

  return 0;
}