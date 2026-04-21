#include <stdio.h>

int main(){
    int x = 25;
    int* y = &x;
    *y = 30;
    printf("Valor atual de x: %i", x);
    return 0;
}