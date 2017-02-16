#include <stdio.h>
#include <locale.h>

/* 
	13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
		conversão é: M = K / 1.61, sendo K a distância em quilômetros e M em milhas.
*/

int main(){
	setlocale(LC_ALL,"");
	
	float K;
	float M;

	printf("Insira um valor em quilometros: "); 
	scanf("%f", &K);

	M = K / 1.61;

	printf("%.2f quilômetros em milhas: %.2f\n", K,M);

	return 0;
}