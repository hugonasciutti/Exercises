/*
    Código para somar dois grandes números

*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    void *head;  // Digito mais significativo
    void *last;  // Digito menos significativo
    int n;   // Numero de digitos
};
typedef struct list Num;

struct node
{
    char item; // Digito
    struct node *previous; // Digito anterior (aquele a esquerda)
    struct node *next; // Proximo digito (aquele a direita)
};
typedef struct node Node;

// createNum
// ----------
// Cria uma lista Num; ou
// retorna NULL em caso de malloc error
Num*
createNum()
{
    Num *n = (Num *)malloc(sizeof(Num)); // Numero a ser retornado

    if(n == NULL)
        return NULL;

    n->head = n->last = NULL;
    n->n = 0;

    return n;
}

// insertHead
// ----------
// Insere um elemento no inicio de
// uma lista duplamente encadeada.
void
insertHead(char item, Num *n)
{
    Node *i = (Node*)malloc(sizeof(Node)); // Node a ser inserido na lista
    i->item = item;
    i->previous = NULL;
    i->next = n->head;

    if(n->head == NULL)
        n->last = i;
    else
        ((Node*)n->head)->previous = i;

    n->head = i;
    n++;
}

// insertLast
// ----------
// Insere um elemento no final de
// uma lista duplamente encadeada.
void
insertLast(char item, Num *n)
{
    Node *i = (Node*)malloc(sizeof(Node)); // Node a ser inserido na lista
    i->item = item;
	i->previous = n->last;
    i->next = NULL;

    if (n->head == NULL)
        n->head = i;
    else
        ((Node*)n->last)->next = i;

    n->last = i;
    n->n++;
}

// capturaNum
// ----------
// Captura um numero do stdin. A captura eh realizada
// por algarismo; um algarismo de cada vez.
// Os algarismos sao concatenados por uma lista duplamente
// encadeada.
// Retorna o endereco da lista de algarismo ou retorna NULL,
// se a ocorrer erro na construcao da lista.
Num *
capturaNum ()
{
    char aux = 0; // Auxiliar para ler o digito e colocar na lista
    Num *n = createNum(); // Numero a ser retornado

	if(n == NULL)
		return NULL;

    while(1)
    {
        if(scanf("%c", &aux) == EOF || aux == '\n')
            break;
        insertLast(aux, n);
    }

    return n;
}

// mostra
// ------
// Mostra o conteudo de n. n eh uma lista duplamente de algarismos,
// que compoem o numero contido em n.
// A ordem de apresentacao dos algarismos eh a seguinte:
// do primeiro item (algarismo) da de n para o ultimo.
void
mostra (Num *n)
{
    Node *aux = NULL; // Auxiliar para imprimir os digitos

    for(aux = n->head; aux != NULL; aux = aux->next)
        printf("%c", aux->item);
    printf("\n");
}

// soma
// ----------
// Soma dois Num retornando o Num resultante,
// ou NULL em caso de malloc error.
Num *
soma(Num *first, Num *second)
{
    Node *firstDigit = NULL; // Auxiliar para somar o primeiro Num
    Node *secondDigit = NULL; // Auxiliar para somar o segundo Num
    char sum = 0; // Armazena o resultado da soma
    int carry = 0; // Armazena o carry da soma
	Num *n = createNum(); // Numero a ser retornado

    if(n == NULL)
        return NULL;

    for(firstDigit = first->last, secondDigit = second->last; (firstDigit != NULL) && (secondDigit != NULL); firstDigit = firstDigit->previous, secondDigit = secondDigit->previous)
    {
        sum = firstDigit->item + secondDigit->item - '0';
        if(carry)
        {
            carry = 0;
            sum++;
        }
        if(sum > '9')
        {
            sum -= 10;
            carry++;
        }
        insertHead(sum, n);
    }

    if(first->n != second->n)
    {
        if(firstDigit == NULL)
            firstDigit = secondDigit;

        for( ; firstDigit != NULL; firstDigit = firstDigit->previous)
        {
            sum = firstDigit->item;
            if(carry)
            {
                carry = 0;
                sum++;
            }
            if(sum > '9')
            {
                sum -= 10;
                carry++;
            }
            insertHead(sum, n);
        }
    }

    if(carry)
        insertHead('1', n);

    return n;
}

// main
// ----------
// Le e imprime dois numeros,
// Entao calcula e imprime sua soma
// Retornando 0
int
main ()
{
    Num *n1 = NULL;	// primeiro numero
    Num *n2 = NULL;	// segundo numero
    Num *r  = NULL;	// resultado

    n1 = capturaNum ();
    mostra (n1);
    n2 = capturaNum ();
    mostra (n2);
    r = soma (n1, n2);
    mostra (r);

    return 0;
}
