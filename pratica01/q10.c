#include <stdio.h>
#include <math.h>

int main(){

int numero;
  printf("coloca ai um numero: ");
  scanf("%i", &numero);

  int milhares = numero/1000;
  int centenas = (numero%1000)/100;
  int dezenas =  ((numero%1000)%100)/10;
  int unidades = ((numero%1000)%100)%10;

  printf("no numero %i, há %i unidades %i dezenas %i centenas e %i milhares.", numero, unidades, dezenas, centenas, milhares);

  return 0;
}
