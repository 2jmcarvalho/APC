#include <stdio.h>
  #include <math.h>
  
  int main(){
  
    const float PI = 3.1416f;
    int raio;
  
    printf("Raio da sua pizza: ");
    scanf("%i", &raio);
  
    float perimetro = 2 * PI * raio;
  
    printf("O perimetro da sua pizza é equivalente á: %f", perimetro);
  
    return 0;
      
  }
