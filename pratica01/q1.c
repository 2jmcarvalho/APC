#include <stdio.h>

int main(){
  float A1 = 0.0f;
  float A2 = 0.0f;
  
  printf("Coloque sua nota da A1: ");
  scanf("%f", &A1);
  printf("Coloque sua nota da A2: ");
  scanf("%f", &A2);

  float media_final = (0.4*A1) + (0.6*A2);

  printf("sua média final é %f", media_final);

  return 0;
}
