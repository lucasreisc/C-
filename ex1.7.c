#include <stdio.h>
#include <stdlib.h>

int main (void) {
  
  int area;
  int baseMaior;
  int baseMenor;
  int altura;

  printf("Digite o valor da base maior do trapezio; ");
  scanf("%d", &baseMaior);

  printf("Digite o valor da base menor do trapezio; ");
  scanf("%d", &baseMenor);

  printf ("Digite o valor da altura: ");
  scanf ("%d", &altura);

  area = (baseMaior + baseMenor) * altura / 2;

  printf (" Area = %d", area);


  return 0;
}