#include <stdio.h>
#include <locale.h>

/*
	25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m². A
		fórmula de conversão é: M = A * 4048.58, sendo M a área em metros quadrados e A a
		área em acres.
*/

int main(){
	setlocale(LC_ALL, "");

	float A=0, M=0;

	printf("Insira um valor em acres: ");
	scanf("%f", &A);

	M = A * 4048.58;
	printf("O valor de %.5f acres para metros é: %.5f\n", A, M);


	return 0;
}
