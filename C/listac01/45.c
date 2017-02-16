#include <stdio.h>
#include <locale.h>

/*
	45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
	    ASCII para resolver o problema.
*/

int main(){
	setlocale(LC_ALL, "");

	char letraMaiuscula = 'A';
	char letraMinuscula = letraMaiuscula + 32;

	printf("Letra Maiúscula: %c == %d\n", letraMaiuscula, letraMaiuscula);
	printf("Letra Maiúscula + 32 == %c == %d\n", letraMinuscula, letraMinuscula);


	return 0;
}
