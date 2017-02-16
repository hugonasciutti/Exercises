#include <stdio.h>
#include <locale.h>

/*
	27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m².
		A fórmula de conversão é: M = H * 10000, sendo M a área em metros quadrados e H
		a área em hectares.
*/

int main(){
	setlocale(LC_ALL, "");

	float M=0, H=0;

	printf("Insira o valor em hectares: ");
	scanf("%f", &H);

	M = H * 10000;
	printf("O valor de %.5f hectares em metros quadrados é: %.5f\n", H, M);



	return 0;
}
