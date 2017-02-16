#include <stdio.h>
#include <locale.h>

/*
	37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
	    em vista que o desconto de 12%.
*/

int main(){
	setlocale(LC_ALL, "");

	float valorProduto = 0;
	float novoValor = 0;
	float descontoEmReais = 0;

	printf("Insira o valor do produto: ");	
	scanf("%f", &valorProduto);

	descontoEmReais = (valorProduto * 0.12);
	novoValor = valorProduto - descontoEmReais;
	printf("Com 12 porcento de desconto fica: %.2f\n", novoValor);

	return 0;
}
