#include <stdio.h>
#include <stdlib.h>

int main (void){

  int num1;
  int num2;

  printf ("Digite o primeiro numero: ");
  scanf  ("%d", &num1);

  printf ("Digite o segundo numero: ");
  scanf  ("%d", &num2);

  if (num1 <= num2) {
    printf ("Ordem crescente : %d <= %d",num1 , num2);
  }
  else {
    printf ("Ordem crescente : %d <= %d" , num2 , num1);
  }
  return 0;
}