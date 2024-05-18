#include <stdio.h>
#include <stdlib.h>

int main (void){

  int largura ;//l
  int altura; // h
  int area ; //a 
  int perimetro; 

  printf("Digite o valor da altura: ");
  scanf ("%d" , &altura);

  printf ("Digite o valor da largura: ");
  scanf ("%d", &largura);

perimetro = (2 * largura) + (2 * altura);
area = largura * altura;

printf("Perimetro : %d\n" , perimetro);
 printf ("Area = %d ", area);


  
  return 0;

}