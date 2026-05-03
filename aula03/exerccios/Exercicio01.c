#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 10

/*
    Exercício 1 — Contar elementos
    Implemente uma função int contarPares(LISTA* l) que percorre a lista e 
    retorna a quantidade de elementos cuja chave é par.
*/

typedef int NUM;

typedef struct{
    NUM numero;
} CONJUNTODENUMEROS;

typedef struct{
    CONJUNTODENUMEROS ARRANJO[MAX];
    int numeroDeElementos;
}LISTA;

void inicializandoLista(LISTA* l){
    l->numeroDeElementos = 0;
}

bool inserindoListaNoFinal(LISTA* l, CONJUNTODENUMEROS conjNun){

    if((l->numeroDeElementos == MAX))
        return false;

    l->ARRANJO[l->numeroDeElementos] = conjNun;
    l->numeroDeElementos++;
    return true;
}

void exibirLista(LISTA* l){
    int i;
    printf("Lista: ");
    for (i=0; i<l->numeroDeElementos; i++)
        printf("%i, ", l->ARRANJO[i].numero);

    printf("\n");
    
}

int quantidadeDeElementosPar(LISTA* l){
    int qtdPar = 0;
    int i;
    for(i=0; i<l->numeroDeElementos; i++){
        if(l->ARRANJO[i].numero % 2 == 0){
            qtdPar++;
        }
    }
    return qtdPar;
}

int main(){
    LISTA* list = malloc(sizeof(LISTA));

    if(list == NULL){
        printf("Erro ao alocar memória\n");
        return 1;
    }

    int count = 10;

    inicializandoLista(list);

    while(count>0){
        CONJUNTODENUMEROS conjNun;
        conjNun.numero = count;
        inserindoListaNoFinal(list, conjNun);
        count--;
    }

    exibirLista(list);

    int result = quantidadeDeElementosPar(list);

    printf("Quantidade de números pares na lista: %i.\n", result);

    free(list); // leberar a memória
    return 0;
}