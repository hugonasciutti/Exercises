#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//5

int main(){
    setlocale(LC_ALL, "");
    char nome[30];
    gets(nome);
    int i,j=0;
    for(i=0; nome[i] != '\0'; i++){
        if(nome[i] != ' '){
            printf("%c",nome[i]);
            j++;

        }
    }
    printf("%d",j);


    return 0;
}
