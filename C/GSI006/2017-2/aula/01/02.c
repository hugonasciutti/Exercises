#include <stdio.h>

//Criar um programa para resolver o seguinte problema: qual é o item cuja descrição possui a menor quantidade de caracteres? Apresentar a resposta na tela do computador (stdout).
//Um item é constituído por uma identificação (id) numérica > 0 e uma descrição (descr) de no máximo 20 caracteres sem espaço em branco. Há uma coleção de 5 itens; cada item é colocado na coleção via teclado (stdin) por um usuário. Um exemplo segue abaixo:

#define NUM_DE_ITEMS 5

struct item {
  unsigned int id;
  char description[100];
};
typedef struct item Item;

int main() {

  int i = 0;
  int menor = 0;

  Item Items[NUM_DE_ITEMS];

  for(i = 0; i < NUM_DE_ITEMS; i++) {
    scanf("%f %s", &Items[i].id, Items[i].nome);

    if(Items[menor].id > Items[i].id) {
      menor = i;
    }
  }

  printf("Item: %s\n", Items[menor].nome);
  printf("Temperatura: %.2f\n", Items[menor].id);


  return 0;
}
