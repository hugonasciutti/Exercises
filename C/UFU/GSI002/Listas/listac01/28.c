#include <stdio.h>
#include <locale.h>

/*
	28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos
		três valores lidos.
*/

int main(){
	setlocale(LC_ALL, "");

	int i = 0;
	float valor[3];
	float resultado = 0;
	for (i = 0; i < 3; i++)
	{
		printf("Insira o valor[%d]: ", i);
		scanf("%f", &valor[i]);
		resultado += valor[i] * valor[i];
	}
	
	printf("O resultado da soma dos quadrados do array [%.2f, %.2f, %.2f] é: %f\n", valor[0], valor[1], valor[2], resultado);


	return 0;
}
