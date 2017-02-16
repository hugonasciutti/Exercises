#include <stdio.h>

/*
15. Crie um programa que receba três valores (obrigatoriamente maiores que zero), repre-
sentando as meddias dos três lados de um triângulo. Elabore funções para:

(a) Determinar se eles lados formam um triângulo, sabendo que:
	- O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.

(b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que:
	- Chama-se equilátero o triângulo que tem três lados iguais.
	- Denominm-se isósceles o triângulo que tem o comprimento de dois lados iguais.
	- Recebe o nome de escaleno o triângulo que tem os três lados diferentes.

*/


int triangle_type(float a, float b, float c);


int main(){

	float a,b,c;

	printf("Insira o lado 'a': ");
	scanf("%f", &a);

	printf("Insira o lado 'b': ");
	scanf("%f", &b);

	printf("Insira o lado 'c': ");
	scanf("%f", &c);

	printf("Triângulo ");
	triangle_type(a,b,c);

	return 0;
}

int triangle_type(float a, float b, float c){

	if(a == b && a == c){
		printf("Equilátero.\n");
		return 0;
	}else if(a == b || a == c){
		printf("Isósceles.\n");
		return 1;
	}else if(a != b && a != c){
		printf("Escaleno.\n");
		return 2;
	}

}