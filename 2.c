/*
2)  Escrever um programa que declare duas variáveis inteiras e 
mostre no vídeo o valor das duas em seguida, a maior delas. 
*/

#include <stdio.h>

int main () {
    int a = 6, b = 7;

    printf("A: %d\n", a);
    printf("B: %d\n", b);

    if (a > b) {
        printf("A é maior que B\n");
    } else if (a == b) {
        printf("A é igual a B\n");
    } else {
        printf("B é maior que A\n");
    }
}