#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

/*
  11.
*/

void imprimir (int *a, int t){
    if(t == 0){
        return 0;
    }else{

        printf("%d ",a[t-1]);
        return imprimir(a,t-1);

    }

}

int main(){
	setlocale(LC_ALL, "");

    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    imprimir(a,10);

    return 0;
}


