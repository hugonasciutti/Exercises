#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Roteiro
  2ª Implementação
  Retorna a cidade com a menor temperatura
  Agora com a função RT retornando um ponteiro de struct;
*/

#define MAX 100

struct rt
{
  float t;
  char cid[MAX];
  char reg[MAX];
};
typedef struct rt RT;

int argsOk(int argc, char *argv[]);
RT *menorRT(char *file_name);

int main(int argc, char *argv[]) {
  if (!argsOk(argc, argv)) {
    return 5;
  }

  RT *r;
  r = menorRT(argv[1]);

  printf("Menor temperatura:\n");
  printf("Temperatura: %f\n", r->t);
  printf("Cidade: %s\n", r->cid);
  printf("Região: %s\n", r->reg);
  printf("\n");

  return 0;
}

int
argsOk(int argc, char *argv[])
{
  if(argc != 2) {
    fprintf(stderr, "%s: missing arguments\n", argv[0]);
    return 0;
  }

  return 1;
}

//Retorna ponteiro de uma struct
RT *
menorRT(char *file_name) {
  RT aux;
  RT *m = (RT *) malloc(sizeof(RT));
  if(m == NULL) {
    fprintf(stderr, "Runned out of memory\n");
    return m;
  }
  m->t = 500;

  FILE *f = fopen(file_name, "r");
  if(f == NULL) {
    fprintf(stderr, "%s file not found\n", file_name);
    return m;
  }

  //Lê o arquivo
  while (fscanf(f, "%f %s %s", &aux.t, aux.cid, aux.reg) != EOF) {
    if(aux.t < m->t) {
      m->t = aux.t;
      strcpy(m->cid, aux.cid);
      strcpy(m->reg, aux.reg);
    }
  }

  fclose(f);

  return m ;
}
