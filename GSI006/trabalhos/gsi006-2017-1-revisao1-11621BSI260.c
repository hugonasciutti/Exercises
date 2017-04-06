/*
Trabalho: Revisao 1
-------
Imprime na ordem inversa o conjunto de dados inseridos pelo usuário.

Hugo Nasciutti
2017
*/

#include <stdio.h>
#include <string.h>

struct dados
{
  int valor;
  char nome[20];
};

int
main()
{

  struct dados dados_usuario[5];

  int i = 0;

  // Realiza a leitura dos dados inseridos pelo usuário
  // --------------------------------------------------
  for (i = 0; i < 5; i++)
  {
    setbuf(stdin, NULL);
    scanf("%d", &dados_usuario[i].valor);
    scanf("%s", dados_usuario[i].nome);

    // Imprime mensagem de erro caso usuario exceda o limite de caracteres.
    // --------------------------------------------------------------------
    while ( strlen(dados_usuario[i].nome) > 20 )
    {
      setbuf(stdin, NULL);
      printf("Quantidade de caracteres maxima eh 20, voce inseriu %d caracteres.\n", (unsigned)strlen(dados_usuario[i].nome));
      printf("Tente novamente: \n");
      scanf("%s", dados_usuario[i].nome);
    }
  }

  int menor = 0;

  // Verifica qual é o menor número
  // ------------------------------
  for (i = 0; i < 5; i++)
    if ( dados_usuario[i].valor < dados_usuario[menor].valor )
      menor = i;

  printf("\nItem com menor numero = %d %s\n\n", dados_usuario[menor].valor, dados_usuario[menor].nome);

  printf("Itens na ordem inversa\n");
  printf("----------------------\n");

  // Imprime itens na ordem inversa
  // ------------------------------
  for (i = 4; i >= 0; i--)
    printf("%d %s\n", dados_usuario[i].valor, dados_usuario[i].nome);

  return 0;
}
