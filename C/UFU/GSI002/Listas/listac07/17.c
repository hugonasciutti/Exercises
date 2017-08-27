#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
17. Receba uma função que receba dois números inteiros positivos por parâmetro e retorne a
    soma dos N números inteiros existentes entre eles.
*/

int soma_n(int x, int y);

int main(){
	setlocale(LC_ALL, "");

	int X,Y;
	printf("Insira X: ");
	scanf("%d", &X);

	printf("Insira Y: ");
	scanf("%d", &Y);

	printf("Diferença: %d\n", abs(X-Y));

	printf("A soma dos N da diferença: %d\n", soma_n(X,Y));

	return 0;
}

int soma_n(int x, int y){

	int diff = abs(x - y);
	int i = 0;
	int maior, menor;

	if(x>y){
		maior = x;
		menor = y;
	}else{
		maior = y;
		menor = x;
	}

	int soma = menor;

	for(i=0; i<diff; i++){
		soma += menor+1;
	}



	return soma;
}