#include <stdio.h>
#include <locale.h>

/*
	20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula
		de conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras.
*/

int main(){
	setlocale(LC_ALL, "");

	float L=0, K=0;

	printf("Insira um valor em quilogramas: ");
	scanf("%f", &K);

	L =  K*0.45;

	printf("O valor de %.2fKg para Libras é: %.2f\n", K, L);

	return 0;
}
