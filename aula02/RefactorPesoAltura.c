#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 225

typedef struct {
    int peso; // peso em quilogramas
    int altura; // altura em centimentros
} PesoAltura;

int main() {
    // agora pessoa1 e um tipo ponteiro PesoAltura o malloc retorna uma referencia do alocamento da quantidade de bytes do ponteiro PesoAltura 
    PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));

    //Para acessar os campos em um tipo ponteiro e diferente do tipo struct em tipo ponteiro acessamos com uma seta "->"
    pessoa1->peso = 80;
    pessoa1->altura = 185;

    printf("Peso: %i, Altura: %i \n", pessoa1->peso, pessoa1->altura);

    if(pessoa1->altura>alturaMaxima)
        printf("Altura acima da maxima. \n");
    else
        printf("Altura abaixo da maxima. \n");

    return 0;

}