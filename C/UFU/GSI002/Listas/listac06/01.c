#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//1

struct horas{
    int hora, minuto, segundo;
};

struct data{
    int d,m,a;
};

struct compromisso{
    struct horas ho;
    struct data da;
    char texto[100];
};

int main(){

    struct horas h1;
    h1.hora = 20;
    h1.minuto = 10;
    h1.segundo = 05;

    printf("%d:%d:%d\n",h1.hora, h1.minuto, h1.segundo);

    struct data hoje;
    hoje.d = 19;
    hoje.m = 10;
    hoje.a = 2016;

    printf("%d/%d/%d\n", hoje.d, hoje.m, hoje.a);

    struct compromisso co;

    co.ho = h1;

    co.da = hoje;

    strcpy(co.texto,"fazendo um teste");
    gets(co.texto);

    printf("%d/%d/%d | %d:%d:%d \nTexto: %s", co.ho.hora, co.ho.minuto, co.ho.segundo, co.da.d, co.da.m, co.da.a, co.texto);




    return 0;
}
