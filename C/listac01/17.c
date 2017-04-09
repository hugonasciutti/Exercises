#include <stdio.h>
#include <locale.h>

/*
	17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas.
		A fórmula de conversão é: P = C/2.54 , sendo C o comprimento em centímetros e P o
		comprimento em polegadas.
*/

int main(){
	setlocale(LC_ALL, "");

	float C=0, P=0;

	printf("Insira um valor em centímetros: ");
	scanf("%f", &C);

	P = C / 2.54;

	printf("O valor de %.2fcm em polegadas é: %.2f\"\n", C, P);



	return 0;
}
