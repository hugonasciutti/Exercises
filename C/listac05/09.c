#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//9

int main(){
    char nome[10];

    fgets(nome,sizeof(nome),stdin);

    int i;
    if(nome[0] == 'a' || nome[0] == 'A'){
        for(i=0; i<strlen(nome); i++)
            printf("%c", nome[i]);
    }else{
        printf("Nao comeca com a ou A\n");
    }

    return 0;
}
