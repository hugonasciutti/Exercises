#include <stdio.h>
#include <locale.h>

/*
	39. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
	    Sendo que da quantia total:
	    - O primeiro ganhador receberá 46%;
	    - O segundo receberá 32%;
	    - O terceiro receberá o restante;

	   	Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

int main(){
	setlocale(LC_ALL, "");

	float premio = 780000.00;
	float primeiro=0, segundo=0, terceiro=0;

	primeiro = premio * 0.46;
	segundo = premio * 0.32;
	terceiro = premio * 0.22;

	printf("O primeiro receberá: %.2f\n", primeiro);
	printf("O segundo receberá: %.2f\n", segundo);
	printf("O terceiro receberá: %.2f\n", terceiro);


	return 0;
}
