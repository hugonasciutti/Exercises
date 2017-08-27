#include <stdio.h>

/* 
  12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
      conversão é: K = 1.61 * M, sendo K a distância e M em milhas.
*/

int main(){

	float K;
	float M;

	printf("Insira um valor em milhas: ");
	scanf("%f", &M);

	K = M * 1.61;

	printf("%.2f milhas em km eh: %f\n", M,K);	



	return 0;
}