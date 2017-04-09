#include <stdio.h>
#include <locale.h>

/*
	18. Leia um valor de volume em metros cúbicos m³ e apresente-o convertido em litros.
		A fórmula de conversão é: L = 1000 * M, sendo L o volume em litros e M o volume em
		metros cúbicos.
*/

int main(){
	setlocale(LC_ALL, "");

	float M=0, L=0;

	printf("Insira um valor de volume em metros cúbicos: ");
	scanf("%f", &M);

	L = 1000*M;

	printf("O valor %.2f metros cúbicos em Litros é: %.2f\n", M, L);


	return 0;
}
