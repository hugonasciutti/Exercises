#include <stdio.h>

/*
18. Faça uma função que receba por parâmetro dois valores X e Z. Calcule e retorne o
resultado de X elevado a Z para o programa principal. Atenção não utilize nenhum função pronta
de exponenciação.
*/

int exponenciar(int X, int Z);

int main(){

	int X, Z;

	printf("Insira o valor de X: ");
	scanf("%d", &X);

	printf("Insira o valor de Z: ");
	scanf("%d", &Z);

	printf("X: %d ^ %d :Z = %d\n",X,Z, exponenciar(X, Z));

	return 0;
}

int exponenciar(int X, int Z){

	int x_antes = X;

	while(Z>1){
		Z -= 1;
		X *= x_antes;
	}
	return X;
}