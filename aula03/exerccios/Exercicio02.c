#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 10

/*
    Exercício 2 — Busca e exibição
    Implemente uma função void exibirPosicao(LISTA* l, int pos) 
    que recebe uma posição e imprime a chave do elemento naquela posição. 
    Caso a posição seja inválida, exiba uma mensagem de erro adequada.
*/
typedef struct{
    int num;
} MATRICULA;

typedef struct {
    MATRICULA A[MAX];
    int numElem;
} LISTA;

void inicializandoLista(LISTA* l){
    l->numElem = 0;
}

bool insertElemLista(LISTA* l, MATRICULA mat){
    if(l->numElem == MAX)
        return false;

    l->A[l->numElem] = mat;
    l->numElem++;
    return true;
}

void exibirPosicao(LISTA* l, int pos){
    int i;
    if((pos<0)||(pos>=l->numElem))
        printf("O %i é um valor invalido", pos);

    for(i=0; i<l->numElem; i++){
        if(i==pos){
            printf("Valor %i da pos %i.", l->A[i].num, pos);
            break;
        }
    }
}

int main(){

    int i;
    LISTA list;
    
    inicializandoLista(&list);

    for(i=0; i<=3; i++){
        MATRICULA mat;
        mat.num = 3-i;
        bool result = insertElemLista(&list, mat);
    }
    int pos = 4;
    exibirPosicao(&list, pos);
    return 0;
}