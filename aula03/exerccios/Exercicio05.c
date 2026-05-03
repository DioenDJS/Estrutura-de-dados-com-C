#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    Exercício 5 — Remover duplicatas
    Dada uma lista que pode conter chaves repetidas, 
    implemente void removerDuplicatas(LISTA* l) 
    que percorre a lista e remove todas as ocorrências 
    duplicadas, mantendo apenas a primeira ocorrência de cada chave.
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

void inicializandoLista(LISTA* l){
    l->nroElem;
}

int main(){

    LISTA* list = malloc(sizeof(LISTA));
    inicializandoLista(list);

    return 0;
}































