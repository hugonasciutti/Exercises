#include <stdio.h>
#include <locale.h>

/*
	19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³. A
		fórmula de conversão é: M = L/1000, sendo L o volume em litros e M o volume em metros
		cúbicos.
*/

int main(){
	setlocale(LC_ALL, "");

	float M=0, L=0;

	printf("Insira um valor em Litros: ");
	scanf("%f", &L);

	M = L/1000;
	
	printf("O valor %f de litros em metros cúbicos é: %f\n", L, M);

	return 0;
}
