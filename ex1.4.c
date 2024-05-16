#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
  
  int lado;
  int perimetro;
  int area;

  printf("digite o valor do lado do Quadrado: ");
  scanf("%d", &lado);


  perimetro = lado * 4;
  area = lado * lado;

  printf ("Perimetro : %d\n" , perimetro);
  printf ("Area = %d ", area);
  
  return 0;
}