#include <stdio.h>

/* 3. Peça ao usuário para digitar três valores inteiros e impra a soma deles. */

int main(){

	int valor1, valor2, valor3;

	printf("Insira o primeiro valor: ");
	scanf("%d", &valor1);
	printf("Insira o segundo valor: ");
	scanf("%d", &valor2);
	printf("Insira o terceiro valor: ");
	scanf("%d", &valor3);

	int soma = valor1 + valor2 + valor3;
	printf("Soma: %d\n", soma);



	return 0;
}