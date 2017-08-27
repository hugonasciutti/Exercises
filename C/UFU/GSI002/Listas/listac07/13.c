#include <stdio.h>
#include <string.h>

/*
13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo representará
a operação que se deseja efetuar com os números. Se o símbolo for + deverá ser realizada uma
adição, se for - uma subtração se for / uma divisão e se for * será efetuarda uma multiplicação.
*/



int simbolo(int x,char op, int y);

int main(){

	int x,y;
	char op;

	printf("Insira um inteiro X: ");
	scanf("%d", &x);

	printf("Insira um inteiro Y: ");
	scanf("%d", &y);

	printf("Insira a operação entre X e Y(+, -, *, /): ");
	setbuf(stdin, NULL);
	scanf("%c", &op);

	printf("Resultado: %d\n", simbolo(x,op,y));


	return 0;
}

int simbolo(int x,char op, int y){

	switch(op){
		case '*':
			return x*y;
		case '/':
			return x/y;
		case '+':
			return x+y;
		case '-':
			return x-y;
		default:
			return 0;
		}
}