#include <stdio.h>

// Criar um programa que responda a seguinte pergunta: onde ocorreu o dia mais frio? Apresentar a resposta na tela do computador (stdout).

// Uma coleção com 5 registros de temperatura está armazenada em um único vetor (rt). Cada registro de temperatura (regTemp) é composto pela temperatura (temp) e o nome da cidade (20 caracteres sem espaço) onde ocorreu tal temperatura.

// Um usuário insere registros na coleção via teclado (stdin). Um exemplo de registros inseridos segue abaixo:

#define NUM_DE_CIDADES 5

struct cidade {
  float temp;
  char nome[50];
};
typedef struct cidade Cidade;

int main() {

  int i = 0;
  int menor = 0;

  Cidade Cidades[NUM_DE_CIDADES];

  for(i = 0; i < NUM_DE_CIDADES; i++) {
    scanf("%f %s", &Cidades[i].temp, Cidades[i].nome);

    if(Cidades[menor].temp > Cidades[i].temp) {
      menor = i;
    }
  }

  printf("Cidade: %s\n", Cidades[menor].nome);
  printf("Temperatura: %.2f\n", Cidades[menor].temp);


  return 0;
}
