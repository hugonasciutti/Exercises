#include <stdio.h>
#include <locale.h>

/*
	42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-
		se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso,
		ele paga 7% de imposto sobre o salário-base.
*/

int main(){
	setlocale(LC_ALL, "");

	float salarioBase = 937;
	float pagamento = 0;

	pagamento  = salarioBase;
	pagamento -= salarioBase * 0.05;
	pagamento -= salarioBase * 0.07;

	printf("O valor a ser pago é: %.2f\n", pagamento);
	

	return 0;
}
