#include <stdio.h>
#include <locale.h>

/*
	15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão
		é: G = R * 180 / pi, sendo G o ângulo em graus e R em radianos e pi = 3.14.
*/

int main(){
	setlocale(LC_ALL, "");

	float pi = 3.14;
	float G=0, R=0;

	printf("Insira um valor em radianos: ");
	scanf("%f", &R);

	G = R * 180 / pi;

	printf("%f radianos em graus é: %f\n", R, G);


	return 0;
}