#include <stdio.h>
#include <stdlib.h>

int main (void) {

  
  int area;
  int base; 
  int altura;
  
  printf ("Digite o valor da base: ");
  scanf("%d", &base);
  
  printf("Digite o valor da altura: ");
  scanf ("%d", &altura);

  area = (base * altura) / 2 ;
  
  printf (" Area : %d", area);

  

  return 0;
}