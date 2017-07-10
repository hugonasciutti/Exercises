// Operacoes sobre listas (em ordem alfabetica)

#include "item.h"

// count: retorna a quantidade de itens da lista l
int count (Item *l);

// create: retorna uma lista de itens com capacidade para t itens
Item * create (int t); 

// delete: retorna
//   . o id do item i que foi removido da lista l;
//   . 0, caso o item i nao tenha sido encontrado na lista l
int delete (Item *l, Item i);

// destroy: destroi a lista l
void destroy (Item *l);

// find: retorna
//   . o item cuja chave de busca eh k;
//   . NOTFOUND, caso um item com chave de busca k nao tenha sido encontrado na lista l
Item find (Item *l, int k);

// insert: retorna a posicao onde o item i foi inserido na lista l
int insert (Item *l, Item i); 

// insert: retorna
//   . p, se o item i foi inserido na posicao p da lista l;
//   . -1, se a lista estiver cheia/
//   . -2, se a posicao p estiver fora da lista. 
int insertp (Item *l, Item i, int p);

// selectp: retorna
//   . o item que esta na posicao p da lista l;
//   . NOTFOUND, caso a posicao p na lista l
Item selectp (Item *l, int p);

// showAll: apresenta todos os itens da lista l
void showAll (Item *l);

// sort: ordena a lista l em ordem ascendente de chave
void sort (Item *l);


