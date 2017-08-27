#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//8

int main(){

    int i;
    char str[]="001a00b";
    for(i=0;i<strlen(str);i++)
        if(str[i]=='0')
            str[i]='1';
    printf("%s\n", str);


    return 0;
}
