#include <stdio.h>
#include <locale.h>

/*
	22. Leia um valor de comprimento em jardas e apresente-o convertido de metros. A fórmula
		de conversão é: J = M * 0.91, sendo J o comprimento em jardas e M o comprimento em
		metros. 
*/

int main(){
	setlocale(LC_ALL, "");

	float J=0, M=0;

	printf("Insira o valor em jardas: ");

	scanf("%f", &J);

	M = J * 0.91;

	printf("O valor %.2f jardas em metros é: %.2f\n", J, M);

	return 0;
}
