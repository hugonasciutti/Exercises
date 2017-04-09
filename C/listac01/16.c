#include <stdio.h>
#include <locale.h>

/*
	16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.
		A fórmula de conversão: C = P * 2.54, sendo C o comprimento em centímetros e P o
		comprimento em polegadas.	
*/

int main(){
	setlocale(LC_ALL, "");

	float C=0, P=0;

	printf("Insira um valor em polegadas: ");
	scanf("%f",&P);

	C = P * 2.54;
	printf("O valor de %.2f\" em cm é: %.2f\n", P, C);

	return 0;
}
