#include <stdio.h>
#include <math.h>

int main(){

  float base = 0.0f;
  float altura = 0.0f;

  printf("Base do triangulo: ");
  scanf("%f", &base);
  printf("Alturua do triângulo: ");
  scanf("%f", &altura);

  float area = (base * altura)/2;

  printf("seu triângulo tem uma área equivalente á %f", area);

  return 0;
    
}
