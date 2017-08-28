#include <stdio.h>

int main() {
  float peso, altura, imc;

  printf("Peso: ");
  scanf("%f", &peso);

  printf("Altura: ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("IMC: %.1f\n", imc);

  if(imc < 18.5)
    printf("Abaixo do peso\n");
  if(imc >= 18.5 && imc <= 24.9)
    printf("Normal\n");
  if(imc >= 25 && imc <= 29.9)
    printf("Acima do peso\n");
  if(imc > 29.9)
    printf("Obesidade\n");

  return 0;
}
