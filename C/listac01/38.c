#include <stdio.h>
#include <locale.h>

/*
	38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que
	    ele recebeu um aumento de 25%.
*/

int main(){
	setlocale(LC_ALL, "");

	float salarioAntes = 0, salarioDepois = 0;

	printf("Insira o salário: ");
	scanf("%f", &salarioAntes);
    
    salarioDepois = salarioAntes * 1.25;
	printf("O salário depois do aumento de 25 porcento é: %.2f\n", salarioDepois);

	return 0;
}
