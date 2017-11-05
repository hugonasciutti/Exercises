#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/set.h"

#define MAXNAME 30
#define N 5

struct aluno
{
    int m;
    char n[MAXNAME];
};
typedef struct aluno Aluno;

int
cmpNome(const void* x, const void* y)
{
	return strcmp( ((Aluno*) x)->n, ((Aluno*) y)->n );
}

int
main ( int argc, char *argv[] )
{
    int i;
    Aluno a[N]; // Variavel auxiliar para armazenar os Aluno's do arquivo no Set
    FILE *f = fopen( "nomes.txt", "r" ); // Arquivo para leitura dos Aluno's
    Set *s = setCreate(); // Set para armazenar os Aluno's

    for ( i = 0 ; i < N ; i++ )
    {
        fscanf(f, "%d %s", &a[i].m, a[i].n );
        setInsert( &a[i], s );
    }

    fclose( f );

    printf( "Set card is: %d\n", setCard( s ) );

    if ( setIn( &a[0], s, cmpNome ) )
        setDelete( setGetEP( "joao", s, cmpNome ), s );

    printf( "Set card is: %d\n", setCard( s ) );

    setDestroy( s );

    return 0;
}
