#include <stdio.h>
#include <locale.h>

/*
	33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/

int main(){
	setlocale(LC_ALL, "");

	int lado_quadrado = 0;
	int resultado_area = 0;

	printf("Insira o lado de um quadrado inteiro: ");
	scanf("%d", &lado_quadrado);

	resultado_area = lado_quadrado * lado_quadrado;
	printf("A área do quadrado é: %d\n", resultado_area);

	

	return 0;
}
