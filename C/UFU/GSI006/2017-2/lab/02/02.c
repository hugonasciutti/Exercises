#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHAR_CIDADE 20
#define MAX_CHAR_REGIAO 15

struct rg {
  float temp;
  char regiao[MAX_CHAR_REGIAO + 1];
  char cidade[MAX_CHAR_CIDADE + 1];
};

typedef struct rg RG;

void search_cidades(RG *l, int num_cidades);
void search_regiao(RG *l, int num_cidades);

int main() {
  int i = 0;
  int num_cidades = 0;
  int cidade_menor_temp = 0;
  char opcao;
  RG *Cidades;

  printf("Insira o número de cidades: ");
  scanf("%d", &num_cidades);

  Cidades = (RG *) malloc(num_cidades * sizeof(RG));

  for(i = 0; i < num_cidades; i++) {
    setbuf(stdin, NULL);
    scanf("%f", &Cidades[i].temp);
    setbuf(stdin, NULL);
    scanf("%s", Cidades[i].cidade);
    setbuf(stdin, NULL);
    scanf("%s", Cidades[i].regiao);
    if(Cidades[cidade_menor_temp].temp > Cidades[i].temp) {
      cidade_menor_temp = i;
    }
  }

  printf("a) cidade com menor registro de temperatura;\n");
  printf("b) registro de temperatura de uma cidade;\n");
  printf("c) cidade com menor registro de temperatura de uma regiao.\n");

  setbuf(stdin, NULL);

  printf("Opção: ");
  scanf("%c", &opcao);

  switch (opcao) {
    case 'a': {
      printf("Cidade: %s;\n", Cidades[cidade_menor_temp].cidade);
      printf("Temp: %.2f;\n", Cidades[cidade_menor_temp].temp);
      printf("Região: %s;\n", Cidades[cidade_menor_temp].regiao);
      break;
    }
    case 'b': {
      search_cidades(Cidades, num_cidades);
      break;
    }
    case 'c': {
      search_regiao(Cidades, num_cidades);
      break;
    }
  }

  return 0;
}

void
search_cidades(RG *l, int num_cidades) {
  char cidade[MAX_CHAR_CIDADE + 1];
  printf("Informe a cidade que deseja procurar: ");
  scanf("%s", cidade);

  int i = 0;
  for(i = 0; i < num_cidades; i++) {
    if(strcmp(l[i].cidade, cidade) == 0) {
      printf("Cidade: %s;\n", l[i].cidade);
      printf("Temp: %.2f;\n", l[i].temp);
      printf("Região: %s;\n", l[i].regiao);
    }
  }
}

void
search_regiao(RG *l, int num_cidades) {
  char regiao[MAX_CHAR_REGIAO + 1];
  int menor = -1;
  printf("Informe a regiao que deseja procurar: ");
  scanf("%s", regiao);

  int i = 0;
  for(i = 0; i < num_cidades; i++) {
    if(strcmp(l[i].regiao, regiao) == 0) {
      if(menor == -1) {
        menor = i;
      }
      if(l[menor].temp > l[i].temp) {
        menor = i;
      }
    }
  }

  printf("Cidade: %s;\n", l[menor].cidade);
  printf("Temp: %.2f;\n", l[menor].temp);
  printf("Região: %s;\n", l[menor].regiao);
}
