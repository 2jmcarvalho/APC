#include <stdio.h>
#include <math.h>

int main (){

  float gb = 0.0f;

  printf("Valor em Gigabytes: ");
  scanf("%f", &gb);

  float bytes = gb*1024;

  printf("%fGB = %f³Bytes", gb, bytes);

  return 0;
  
}
