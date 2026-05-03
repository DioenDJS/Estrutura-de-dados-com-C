#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    Exercício 4 — Inserção ordenada
    Implemente uma função bool inserirOrdenado(LISTA* l, REGISTRO reg) que insere um elemento mantendo a lista 
    sempre em ordem crescente, sem usar nenhuma função de ordenação. A função deve encontrar a posição correta e inserir nela.

    💡 Dica: você já tem a função inserirElemento, pode reutilizá-la.
*/

#define MAX 10

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
}REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int nroElem;
}LISTA;

void inicializarLista(LISTA* l){
    l->nroElem = 0;
}

bool inserirElemento(LISTA* l, REGISTRO reg, int i){
    int j;
    if((l->nroElem==MAX) || (i < 0) || (i>l->nroElem))
        return false;

    for(j=l->nroElem; j>i; j--)
        l->A[j] = l->A[j-1];
    
    l->A[i] = reg;
    l->nroElem++;
    return true;
}

bool inserirOrdenado(LISTA* l, REGISTRO reg){
    if(l->nroElem == MAX)
        return false;

    int i = 0;

    while(i < l->nroElem && l->A[i].chave <= reg.chave)
        i++;

    return inserirElemento(l, reg, i);
}

void exibirLista(LISTA* l){
    int i;
    printf("Lista: \"");
    for(i=0; i<l->nroElem;i++)
        printf("%i ", l->A[i].chave);
    printf("\"\n");
}

int main(){
    LISTA* list = malloc(sizeof(LISTA)); 

    inicializarLista(list);
    REGISTRO reg;
    reg.chave = 47;
    REGISTRO reg1;
    reg1.chave = 02;
    REGISTRO reg3;
    reg3.chave = 99;
    REGISTRO reg4;
    reg4.chave = 21;
    REGISTRO reg5;
    reg5.chave = 14;
    inserirElemento(list, reg, 0);
    inserirElemento(list, reg1, 1);
    inserirElemento(list, reg3, 2);
    inserirElemento(list, reg4, 3);
    inserirElemento(list, reg5, 4);

    exibirLista(list);

    REGISTRO reg6;
    reg6.chave = 5;

    inserirOrdenado(list, reg6);

    exibirLista(list);
    return 0;
}