#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//17

int main(){

    char str[50];
    int i,count=0;
    fgets(str,sizeof(str),stdin);
    int strl = (int)strlen(str);
    for(i=0;i<strl;i++){
        if(str[i]==' '){
            str[i]='\0';
            count++;
        }
    }
    for(i=0;i<strl-count; i++){
        printf("%c", str[i]);
    }
    printf("\n");


    return 0;
}
