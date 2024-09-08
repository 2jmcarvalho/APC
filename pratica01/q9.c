#include <stdio.h>
#include <math.h>

int main(){
  int sec;
  printf("Coloque os segundos para a converção: ");
  scanf("%i", &sec);
  
  int hr = sec/3600;
  int min = (sec % 3600)/60;
  int resto = (sec % 3600)%60;

  printf("%i segundos equivale à: %i hr %i min %i sec", sec , hr, min, resto);

  return 0;
}
