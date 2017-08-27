#include <stdio.h>
#include <locale.h>

/*
	7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
	   números forem igauis, imprima a mensagem Números iguais.
*/

int main(){
	setlocale(LC_ALL, "");

	int num1=0;
	int num2=0;
	
	printf("Num1: ");
	scanf("%d", &num1);

	printf("Num2: ");
	scanf("%d", &num2);

	if(num1>num2){
		printf("Num1 é maior que num2.\n");
	} else if(num2>num1){
		printf("Num2 é maior que num1.\n");
	} else {
		printf("Números iguais.\n");
	}

	return 0;
}
