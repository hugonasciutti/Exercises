#include <stdio.h>
#include <locale.h>

/*
	26. Leia um vlaor de área em metros quadrados m² e apresente-o convertido em hectares.
		A fórmula de conversão é: H = M * 0.0001, sendo M a área em metros quadrados e H
		a área em hectares.
*/

int main(){
	setlocale(LC_ALL, "");

	float H=0, M=0;

	printf("Insira o valor em metros quadrados: ");
	scanf("%f", &M);

	H = M * 0.0001;
	printf("O valor %.5f metros quadrados em hectares é: %.5f\n", M, H);

	return 0;
}
