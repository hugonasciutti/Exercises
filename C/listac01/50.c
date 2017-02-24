#include <stdio.h>
#include <locale.h>

/*
	50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de 
		sua idade e do ano atual;
*/

int main(){
	setlocale(LC_ALL, "");

	int anoAtual = 2017;
	int anoNascimento = 0;
	int idade = 22;

	anoNascimento = anoAtual - idade;

	printf("Ano de nascimento: %d\n", anoNascimento);



	return 0;
}
