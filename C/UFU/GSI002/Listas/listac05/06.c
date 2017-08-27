#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//6

int main(){
    setlocale(LC_ALL, "");

    char nome[30], sexo;
    int idade;

    printf("Insira nome: ");
    gets(nome);
    printf("Insira sexo 'F' para Feminino e 'M' para Masculino: ");
    scanf("%c",&sexo);
    printf("Insira idade: ");
    scanf("%d",&idade);

    if((sexo == 'F' || sexo == 'f') && (idade < 25)){
        printf("ACEITA");
    }

    return 0;
}
