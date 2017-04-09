#include <stdio.h>
#include <locale.h>

/*
	32. Leia um número inteiro e imprima a soma do seu sucessor de seu triplo com o antecessor de
	    seu dobro.
*/

int main(){
	setlocale(LC_ALL, "");

	int num=0, resultado=0;

	printf("Insira um valor inteiro: ");
	scanf("%d", &num);
	resultado  = (num*3+1); // Soma do sucessor do triplo de num
	resultado += (num*2-1); // Antecessor do dobro de num; Note o operador de atribuição +=;

	printf("O resultado é: %d\n", resultado);

	return 0;
}
