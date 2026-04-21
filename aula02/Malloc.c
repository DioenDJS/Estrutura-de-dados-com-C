#include <stdio.h>
#include <malloc.h>

int main(){
    // a variavel y e do tipo ponteiro int e recebe o endereço do malloc com um casting pra converte em int
    int* y = (int*) malloc(sizeof(int));
    // *y a referencia na memoria que aponta pra o local alocado recebe 20
    *y = 20;
    int z = sizeof(int);
    printf("*y=%i z=%i\n", *y, z);
    return 0;
}