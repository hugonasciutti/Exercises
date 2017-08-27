#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//2

int main(){

    setlocale(LC_ALL, "");
    char string[30];
    gets(string);
    int i, length;
    for(i=0; string[i] != '\0'; i++){
        length = i+1;
    }
    printf("Tamanho: %d",length);

    return 0;
}
