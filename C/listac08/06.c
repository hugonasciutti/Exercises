#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

/*
  6. A multiplicação de dois números inteiros pode ser feita através de somas sucessivas.
  Proponha um algoritmo recursivo Multp_Rec(n1,n2) que calcule a multiplicação de dois
  inteiros.
*/

int Multp_Rec(int n1, int n2){
	if(n2 == 1)
		return n1;
	else
		return n1 + Multp_Rec(n1, n2-1);

}

int main(){
	setlocale(LC_ALL, "");

	printf("Multp_Rec: %d\n", Multp_Rec(3,6));

    return 0;
}

