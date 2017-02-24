#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
		- O número digitado ao quadrado
		- A raiz quadrada do número digitado
*/

int main(){
	setlocale(LC_ALL, "");

	
	float num=0;
	float calc=0;
	float calc2=0;

	printf("Insira um número: ");
	scanf("%f", &num);

	if(num>0){
		calc = sqrt(num);
		calc2 = num * num;
		printf("%.2f ao quadrado é %.2f.\n", num, calc2);
		printf("Raiz quadrada de %.2f é %.2f.\n", num, calc);
	}

	return 0;
}
