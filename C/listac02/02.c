#include <stdio.h>
#include <locale.h>
#include <math.h>


/*
	2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
	   quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
	   número é inválido.
*/

int main(){
	setlocale(LC_ALL, "");

	float num=0;
	float calc=0;

	printf("Insira um número: ");
	scanf("%f", &num);


	if(num>0) {
		calc = sqrt(num);
		printf("A raiz quadrada de %f\n", calc);
	} else {
		printf("Número é inválido, insira um valor maior que zero.\n");
	}
	

	return 0;
}
