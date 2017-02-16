#include <stdio.h>
#include <locale.h>

/*
	14. Leia um ângula em graus e apresente-o convertido em radianos. A fórmula de conversão
	é: R = G * pi /180, sendo G o ângulo em graus e R em radianos e pi = 3.14.
*/

int main(){
	setlocale(LC_ALL, "");

	float pi = 3.14;
	float R=0, G=0;

	printf("Insira um valor em graus: ");
	scanf("%f", &G);

	R = G * pi / 180;

	printf("%.2f graus em radianos: %f\n", G, R);


	return 0;
}