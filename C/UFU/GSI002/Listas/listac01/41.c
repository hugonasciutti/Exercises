#include <stdio.h>
#include <locale.h>

/*
	41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
	    trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre
	    o valor calculado.
*/

int main(){
	setlocale(LC_ALL, "");

	float valorHora = 0, horasNoMes = 0;
	float pagamento = 0;
	
	printf("Valor da hora: ");
	scanf("%f", &valorHora);

	printf("Número de horas trabalhadas no mês: ");
	scanf("%f", &horasNoMes);
	
	pagamento  = valorHora * horasNoMes;
	pagamento += pagamento * 0.10;

	printf("O valor a ser pago é: %.2f\n", pagamento);

	return 0;
}

