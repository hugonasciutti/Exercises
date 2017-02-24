#include <stdio.h>
#include <locale.h>

/*
	1. Faça um programa que receba dois números e mostre qual deles é o maior.
*/

int main(){
	setlocale(LC_ALL, "");

	int val1=0;
	int val2=0;

	printf("Valor 1: ");
	scanf("%d", &val1);
	
	printf("Valor 2: ");
	scanf("%d", &val2);

	if(val1 > val2) {
		printf("Valor 1 é maior que Valor 2.\n");
	} else {
		printf("Valor 2 é maior ou igual que Valor 1.\n");
	}

	return 0;
}
