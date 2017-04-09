#include <stdio.h>
#include <locale.h>

/*
	53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l),
	    bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno
	    com tela.
*/

int main(){
	setlocale(LC_ALL, "");

	float terrenoComprimento = 0;
	float terrenoLargura = 0;
	float precoMetroTela = 0;
	float custoFinal = 0;

	printf("Comprimento: ");
	scanf("%f", &terrenoComprimento);

	printf("Largura: ");
	scanf("%f", &terrenoLargura);

	printf("Preço metro de tela: ");
	scanf("%f", &precoMetroTela);

	custoFinal = (terrenoComprimento * terrenoLargura) * precoMetroTela;

	printf("Custo final: R$%.2f\n", custoFinal);

	return 0;
}
