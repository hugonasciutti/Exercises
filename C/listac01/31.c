#include <stdio.h>
#include <locale.h>

/*
	31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

int main(){
	setlocale(LC_ALL, "");

	int val=0;
	printf("Insira um valor inteiro: ");	
	scanf("%d", &val);

	printf("Antecessor de %d é %d.\n", val, val-1);
	printf("Sucessor de %d é %d.\n", val, val+1);

	return 0;
}
