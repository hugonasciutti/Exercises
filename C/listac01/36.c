#include <stdio.h>
#include <locale.h>

/*
	36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
	    de um cilindro é calculado por meio da seguinte fórmula: V = π(pi) * raio² * altura, onde π = 3.141592.
*/

int main(){
	setlocale(LC_ALL, "");

	float altura = 0;
	float raio = 0;
	float volume = 0;
	float pi = 3.141592;

	printf("Insira a altura: ");
	scanf("%f", &altura);
	printf("Insira o raio: ");
	scanf("%f", &raio);

	volume = pi * (raio * raio) * altura;

	printf("Volume: %.2f\n", volume);

	return 0;
}
