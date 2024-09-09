#include <stdio.h>

int main (){

  float horaportrabalho = 0.0f;
  int totaldehorarpormes;
  const float IR = 0.25f;
  const float INSS = 0.11f;
  
  printf("Quanto tu ganha por hora? ");
  scanf("%f", &horaportrabalho);
  printf("Trabalha por quantas horas por mês? ");
  scanf("%i", &totaldehorarpormes);

  float salariobruto = (horaportrabalho * totaldehorarpormes);

  float impostoerenda = salariobruto*IR;
  float impostoseguridade = salariobruto*INSS;
  
  float salarioliq = salariobruto - impostoerenda - impostoseguridade;

  printf("salário bruto: %f \n",salariobruto);
  printf("IR: %f", IR);
  printf("INSS: %f", INSS);
  printf("salário líquido: %f", salarioliq);

  return 0;
}
