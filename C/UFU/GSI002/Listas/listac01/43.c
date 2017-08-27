#include <stdio.h>
#include <locale.h>

/*
	43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
	- o total a pagar com desconto de 10%;
	- o valor de cada parcela, no parcelamento de 3x sem juros;
	- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
	- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total);
*/

int main(){
	setlocale(LC_ALL, "");

	float total = 0;
	float parcelas[3];
	int qtdParcelas = 0;
	float valorDaCompraAntes = 0, valorDaCompraDepois = 0;
	float desconto = 0;

	int i = 0;
	for (i = 0; i < 3; i++){
		parcelas[i] = 0;
	}
	
	float comissao = 0;
	int flag = 0;
	char parcelar;

	printf("Valor da compra: ");
	scanf("%f", &valorDaCompraAntes);

	printf("Desconto de 10 porcento!\n");
	desconto = valorDaCompraAntes * 0.10;
	valorDaCompraDepois = valorDaCompraAntes * 0.90;
	printf("%.2f - %.2f = %.2f\n", valorDaCompraAntes, desconto, valorDaCompraDepois);

	printf("Deseja parcelar? (y/n): ");
	setbuf(stdin, NULL);
	scanf("%c", &parcelar);

	if (parcelar == 'y' || parcelar == 'Y')
	{
		flag = 1;
		while(qtdParcelas <= 0 || qtdParcelas >3){

			printf("Insira a quantidade de parcelas: ");
			scanf("%d", &qtdParcelas);

			if(qtdParcelas > 3){
				printf("Insira até 3 parcelas.\n");
			}else if(qtdParcelas <= 0){
				printf("Insira um número positivo válido.\n");
			}
		}


		for (int i = 0; i < qtdParcelas; i++)
		{
			parcelas[i] = valorDaCompraDepois / (float)qtdParcelas;
			printf("Parcela %d: R$%.2f\n", i+1, parcelas[i]);
		}
	}// Fim do parcelamento.

	if(flag == 1){
		// Se à vista
		comissao = valorDaCompraAntes * 0.05;
		printf("A comissão do vendedor: R$%.2f.\n", comissao);
	} else {
		// Se parcelado
		comissao = valorDaCompraDepois * 0.05;
		printf("A comissão do vendedor: R$%.2f.\n", comissao);
	}

	return 0;
}
