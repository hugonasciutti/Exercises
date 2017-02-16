#include <stdio.h>
#include <locale.h>

/*
	34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente.
	    A área do círculo é π(pi) * raio², considere π = 3.141592. 
*/

int main(){
	setlocale(LC_ALL, "");

	float raio_circulo = 0;
	float area_circulo = 0;
	float pi = 3.141592;

	printf("Insira o raio de um círculo: ");
	scanf("%f", &raio_circulo);

	area_circulo = pi * (raio_circulo * raio_circulo);

	printf("A área do círculo é: %f\n", area_circulo);

	return 0;
}
