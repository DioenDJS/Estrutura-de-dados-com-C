

/*
Exercício 3 — Maior e menor
Implemente duas funções:

int maiorElemento(LISTA* l) que retorna a maior chave da lista
int menorElemento(LISTA* l) que retorna a menor chave da lista

Considere o caso em que a lista está vazia e trate esse caso adequadamente.
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 10

typedef struct{
    int num;
}NUMERAL;

typedef struct{
    NUMERAL A[MAX];
    int nElem;
}LISTA;

void iniciar(LISTA* l){
    l->nElem = 0;
}

bool insert(LISTA* l, NUMERAL nral){
    if(l->nElem == MAX)
        return false;
    l->A[l->nElem] = nral;
    l->nElem++;
    return true;
}

int maiorElemento(LISTA* l){
    if(l->nElem == 0)
        return 0;
    int i, maior = l->A[0].num;
    for(i=0; i<l->nElem; i++){
        if(l->A[i].num > maior)
            maior = l->A[i].num;
    }
    return maior;
    
}

int menorElemento(LISTA* l){
    if(l->nElem == 0)
        return 0;
    int i;
    int menor = l->A[0].num;
    for(i=0; i<l->nElem; i++){
        if(l->A[i].num < menor)
            menor = l->A[i].num;
    }
    return menor;
}

int main(){

    LISTA list;

    iniciar(&list);

    int i;
    
    for(i=0; i<7; i++){
        NUMERAL nral;
        nral.num = i * 3 + 1;
        int j = i * 3 + 1;
        printf("%i, ",j);
        bool result = insert(&list, nral);
    }
    int numMaior, numMenor;
    numMaior = maiorElemento(&list);
    printf("\nO maior número é %i \n", numMaior);

    numMenor = menorElemento(&list);
    printf("O menor número é %i", numMenor); 
    return 0;
}