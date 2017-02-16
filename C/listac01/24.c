#include <stdio.h>
#include <locale.h>

/*
	24. Leia um valor de área em metros quadrados m² e apresente-o convertido em acres. A
		fórmula de conversão é: A = M * 0.000247, sendo M a área em metros quadrados e A
		a área em acres.
*/

int main(){
	setlocale(LC_ALL, "");

	float A=0, M=0;

	printf("Insira um valor em metros quadrados: ");
	scanf("%f", &M);

	A = M * 0.000247;

	printf("O valor de %.5f metros quadrados em acres é: %.5f\n", M, A);


	return 0;
}
