#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//1

int main(){
    setlocale(LC_ALL,"");
    char string[100];
    gets(string);
    printf("Gets: %s",string);

    return 0;
}
