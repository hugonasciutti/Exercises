#include <stdio.h>
#include <locale.h>

/*
	23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula 
		de conversão é: J = M / 0.91, sendo J o comprimento em jardas e M o comprimento
		em metros.
*/

int main(){
	setlocale(LC_ALL, "");

	float M=0, J=0;

	printf("Insira o valor do comprimento em metros: ");
	scanf("%f", &M);

	J = M / 0.91;
	printf("O valor %.2f metros em jardas é: %.2f\n", M, J);




	return 0;
}
