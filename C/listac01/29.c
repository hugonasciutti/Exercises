#include <stdio.h>
#include <locale.h>

/*
	29. Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/

int main(){
	setlocale(LC_ALL, "");

	float nota[4],soma=0, media=0;
	int i=0;
	for(i=0; i<4; i++) {
		printf("Insira a nota[%d]: ", i);
		scanf("%f", &nota[i]);
		soma += nota[i];
	}
	media = soma/4;
	printf("A média das notas [%.2f, %.2f, %.2f, %.2f] é: %f\n", nota[0], nota[1], nota[2], nota[3], media);

	

	return 0;
}
