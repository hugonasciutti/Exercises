#include <stdio.h>
#include <locale.h>

/*
	5. Faça um programa que receba um número inteiro e verifique se este número é par ou
	   ímpar.
*/

int main(){
	setlocale(LC_ALL, "");

	int num=0;

	printf("Insira um número: ");
	scanf("%d", &num);

	if(num % 2 == 0){
		printf("O número é par.\n");
	} else {
		printf("O número não é par.\n");
	}
	

	return 0;
}
