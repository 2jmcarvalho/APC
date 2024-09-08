#include <stdio.h>
#include <math.h>

int main (){

  int distancia;

  printf("distancia percorrida: ");
  scanf("%i", &distancia);

  float altura = sqrt(2)/2 * distancia;

  printf("Apos %i u.d. o avião atinge %f", distancia, altura);
  
  return 0;
  
}
