#include <stdio.h>
#include <locale.h>

/*
	40. Uma empresa contrata um encanador a R$30.00 por dia. Faça um programa que solicite
	    o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser
	    paga, sabendo-se que são descontados 8% para imposto de renda.
*/

int main(){
	setlocale(LC_ALL, "");

	float pagamento = 0, diasTrabalhados = 0;
	float valorHora = 30;

	printf("Insira o número de dias trabalhados: ");
	scanf("%f", &diasTrabalhados);

	pagamento  = (valorHora * diasTrabalhados);
	pagamento -=  pagamento * 0.08;
	printf("O valor final abatendo 8 porcento é: %.2f\n", pagamento);

	return 0;
}
