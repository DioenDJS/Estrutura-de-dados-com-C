#include <stdio.h>
#include <stdbool.h>
#define MAX 10

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;   
} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int nroElem;
} LISTA;

// inicializando a lista
void inicializandoLista(LISTA* l){
    l->nroElem = 0;
}

// Retornar o numero de elementos 
int tamanho(LISTA* l){
    return l->nroElem;
}

//Exiir e implesão
void exibirLista(LISTA* l){
    int i;
    printf("Lista: \"");
    for(i=0; i<l->nroElem;i++)
        printf("%i ", l->A[i].chave);
    printf("\"\n");
}

//Buscar elementos
int buscarSequencial(LISTA* l, TIPOCHAVE ch){
    int i = 0;
    while(i < l->nroElem){
        if(ch == l->A[i].chave) return i;
        else i++;
    }
    return -1;
}

bool inserirElemento(LISTA* l, REGISTRO reg, int i){
    int j;
    if((l->nroElem == MAX) || (i<0) || (i>l->nroElem))
        return false;

    for(j=l->nroElem; j>i; j--)
        l->A[j] = l->A[j-1];

    l->A[i] = reg;
    l->nroElem++;
    return true;
}

bool excluirElemLista(TIPOCHAVE ch, LISTA* l){
    int pos, j;
    pos = buscarSequencial(l, ch);
    if(pos == -1)
        return false;
    for (j=pos; j<l->nroElem - 1; j++)
        l->A[j] = l->A[j+1];
    l->nroElem--;
    return true;
}

void reinicializarLista(LISTA* l){
    l->nroElem = 0;
}

int main(){

    LISTA list; // variavel real na memoria 
    inicializandoLista(&list); // & vá neste endereção da memoria onde esta lista e passanod para o ponteido da função

    REGISTRO reg;
    reg.chave = 39;

    REGISTRO reg1;
    reg1.chave = 71;

    int posicao = 0;
    bool resultInsert = inserirElemento(&list, reg, posicao);
    printf("Resultado da inserção %d \n", resultInsert);

    int posicao1 = 1;
    bool resultInsert1 = inserirElemento(&list, reg1, posicao1);
    printf("Resultado da inserção %d \n", resultInsert1);
    

    exibirLista(&list);

    excluirElemLista(39, &list);

    exibirLista(&list);

    reinicializarLista(&list);

    return 0;
}