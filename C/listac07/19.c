#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
19. Faça uma função que retorne o maior fator primo de um número.
*/

int maior_fat_primo(int x);


int main(){
	setlocale(LC_ALL, "");

	int X=0;
	printf("Insira x: ");
	scanf("%d", &X);

	printf("O maior fatorial é: %d\n", maior_fat_primo(X));


	return 0;
}

int maior_fat_primo(int x){

	int maior_primo=0;
	int j=0, x_before= x, count=0;


	while(x>0){

		count = 0;

		for(j=1; x >= j; j++){
			if( x % j == 0){
				count++;
			}
		}
		if(count == 2 && x_before % x == 0){			
			return x;		
		}

		x--;		
	}

	return 0;
}