#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//14

int main(){

    int i;
    char str[50];
    fgets(str,sizeof(str),stdin);
    for(i=0; i<strlen(str);i++)
        str[i] += 1;
    printf("%s\n", str);

    return 0;
}
