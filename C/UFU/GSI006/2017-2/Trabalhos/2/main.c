#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/set.h"

#define MAXNAME 30
#define N 5

struct aluno
{
    int mat;
    char nome[MAXNAME];
};
typedef struct aluno Aluno;

int
cmpNome(const void* x, const void* y)
{
    return strcmp( ((Aluno*) x)->nome, ((Aluno*) y)->mat );
}

void showOption(Set *s)
{
  int option = 0, i = -1;
  printf("Selecione uma opção: \n");

  printf("1: Quantidade de elementos. setCard \n");
  printf("2: Deletar struct na posição: setDelete\n");
  printf("3: setDestroy\n");
  printf("4: setGetE\n");
  printf("5: setGetEP\n");
  printf("6: setIn\n");
  printf("7: delete by string match setDelete(setGetEP('str', s, cmpNome), s);\n");
  printf("8: setInsert\n");
  printf("9: Imprimir tudo\n");
  printf("0: Sair\n");
  printf("=====\n\n");

  printf("Opção: ");
  scanf("%d", &option);

  switch (option) {
    case 1:
    {
      printf("\n> Há %d posições\n\n", setCard(s));
      showOption(s);
      break;
    }
    case 2:
    {
      scanf("%d", &i);
      while (i < 0)
      {
        setbuf(stdin, NULL);
        scanf("%d", &i);
        printf("Insira um número >=0.");
      }
      setDelete(i, s);
      showOption(s);
      break;
    }
    case 3:
    {

      break;
    }
    case 4:
    {

      printf("Insira a posição: ");
      scanf("%d", &i);
      printf("[%d] {\n", i);
      Aluno *a = setGetE(s, i);
      printf("Matrícula: %d, \n", a->mat);
      printf("Nome: %s \n", a->nome);
      printf("};\n\n");

      break;
    }
    case 5:
    {

      break;
    }
    case 6:
    {

      break;
    }
    case 7:
    {

      break;
    }
    case 8:
    {

      break;
    }
    case 9:
    {
      i = 0;
      while (i < setCard(s))
      {
        Aluno *a = setGetE(s, i);
        printf("[%d] {\n", i);
        printf("Matrícula: %d, \n", a->mat);
        printf("Nome: %s \n", a->nome);
        printf("};\n\n");
        i++;
      }
      break;
    }
    case 0:
    {
      printf("Programa encerrado.");
      free(s);
      exit(0);
    }
    default:
    {
      printf("Opção inválida\n");
      showOption(s);
      break;
    }
  }
  printf("Fim de execução.");
  return;
}

// setCreate
// setDelete
// setDestroy
// setGetE
// setGetEP
// setIn
// setInsert
// setInsert(&a[i], s);
// setDelete(setGetEP("joao", s, cmpNome), s);
// setCard( s );

int
main ( int argc, char *argv[] )
{
    int i;
    Aluno *a; // Variavel auxiliar para armazenar os Aluno's do arquivo no Set
    FILE *f = fopen("nomes.txt", "r"); // Arquivo para leitura dos Aluno's
    Set *s = setCreate(); // Set para armazenar os Aluno's
    if(!s) {
      fprintf(stderr, "Não há espaço na memória.\n");
      return 1;
    }
    printf("Struct Alunos criados na posição de memória: %p .\n\n", (void *) &s);

    for ( i = 0 ; i < N ; i++ )
    {
      fscanf(f, "%d %s", &a[i].mat, a[i].nome);
      printf("%d %s\n\n", a[i].mat, a[i].nome);

      int isInserted = setInsert(&a[i], s);
      if(!isInserted) {
        printf("Houve um erro ao inserir um item na posição %d", i);
      }
    }

    showOption(s);
    fclose( f );

    // printf( "Set card is: %d\n", setCard( s ) );

    // if ( setIn( &a[0], s, cmpNome ) )
    //     setDelete( setGetEP( "joao", s, cmpNome ), s );

    // printf( "Set card is: %d\n", setCard( s ) );

    // setDestroy( s );

    return 0;
}
