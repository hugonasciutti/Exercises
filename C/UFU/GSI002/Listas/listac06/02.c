#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//2

struct pessoa{
        char nome[30];
        int idade;
        char end[50];
    };

int main(){

    struct pessoa p1;

    printf("Nome: ");
    setbuf(stdin,NULL);
    gets(p1.nome);
    printf("Idade: ");
    scanf("%d",&p1.idade);
    printf("Endereco: ");
    setbuf(stdin,NULL);
    gets(p1.end);
    printf("Nome: %s\nIdade: %d\nEndereco: %s",p1.nome,p1.idade,p1.end);


    return 0;
}
