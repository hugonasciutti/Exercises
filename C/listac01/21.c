#include <stdio.h>
#include <locale.h>

/*
	21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula
		de conversão é: K = L * 0.45, sendo K a massa em quilogramas e L a massa em libras.
*/

int main(){
	setlocale(LC_ALL, "");

	float L=0, K=0;

	printf("Insira o valor em libras: ");
	scanf("%f", &L);

	K = L * 0.45;

	printf("O valor de %.2f libras em quilogramas é: %.2f\n", L, K);


	return 0;
}
