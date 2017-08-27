#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//4

int main(){
    char nome[10];
    gets(nome);
    int i;
    for(i=0; nome[i] != '\0'; i++){
        printf("%c",nome[i]);
    }
    return 0;
}
