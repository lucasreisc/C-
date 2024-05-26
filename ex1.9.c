#include <stdio.h>
#include <stdlib.h>

int main (void){

  int num;

  printf ("Digite um numero: ");
  scanf ("%d", &num);

  if (num % 2 == 0) {

      printf ("O numero %d e par." , num);
  }   
  else {
    printf ("O numero e impar." , num);
  }
  
  return 0;
}