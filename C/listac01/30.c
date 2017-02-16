#include <stdio.h>
#include <locale.h>

/*
	30. Leita um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente
		em dólares.
*/		

int main(){
	setlocale(LC_ALL, "");


	float real=0, dolar=0, cotacao_dolar =0;
	printf("Insira um valor em reais R$");
	scanf("%f", &real);
	printf("Insira a cotação do dólar $");
	scanf("%f", &cotacao_dolar);
	
	dolar = real * cotacao_dolar;

	printf("R$%.2f em dólares é: $%.2f\n", real, dolar);


	return 0;
}
