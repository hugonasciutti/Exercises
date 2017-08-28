#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//13

int main(){

    char str[50];
    int i,count=0;
    fgets(str,sizeof(str),stdin);

    for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("Branco: %d\n", count);

    return 0;
}
