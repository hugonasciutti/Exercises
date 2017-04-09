#include <stdio.h>
#include <locale.h>

/*
	44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
	    subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
	    seu objetivo.
*/

int main(){
	setlocale(LC_ALL, "");

	int alturaDoDegrau = 0;
	int alturaEscada = 0;
	int qtdDegraus = 0;

	printf("Altura do degrau: ");
	scanf("%d", &alturaDoDegrau);	

	printf("Altura da escada: ");
	scanf("%d", &alturaEscada);

	qtdDegraus = alturaEscada / alturaDoDegrau;
	printf("O usuário deverá subir %d degraus.\n", qtdDegraus);

	return 0;
}
