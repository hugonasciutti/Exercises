#include <stdio.h>
#include <stdlib.h>

/*
  Roteiro
  Retorna a cidade com a menor temperatura
  Primeiro exemplo, retorno sem ponteiro, irá retornar toda a struct, o que pode prejudicar a memória.
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
RT menorRT(char *file_name);

int main(int argc, char *argv[]) {
  if (!argsOk(argc, argv)) {
    return 5;
  }

  RT r;
  r = menorRT(argv[1]);
  printf("Menor temperatura:\n");
  printf("Temperatura: %f\n", r.t);
  printf("Cidade: %s\n", r.cid);
  printf("Região: %s\n", r.reg);
  printf("\n");
  return 0;
}

int argsOk(int argc, char *argv[])
{
  if(argc != 2) {
    fprintf(stderr, "%s: missing arguments\n", argv[0]);
    return 0;
  }

  return 1;
}

RT
menorRT(char *file_name) {
  RT aux, m;
  m.t = 5000;

  FILE *f = fopen(file_name, "r");

  if(f == NULL) {
    fprintf(stderr, "%s file not found\n", file_name);
    return aux;
  }

  //Lê o arquivo
  while (fscanf(f, "%f %s %s", &aux.t, aux.cid, aux.reg) != EOF) {
    if(aux.t < m.t) {
      m = aux;
    }
    fclose(f);

    return m ;
  }
}
