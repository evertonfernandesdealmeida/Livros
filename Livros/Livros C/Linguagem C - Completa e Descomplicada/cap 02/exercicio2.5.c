// 5) Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.

#include <stdio.h>

int main() {
    float numero_flutuante;
    printf("Leia um valor do tipo float: \n");
    scanf("%f", &numero_flutuante);

    printf("Valor lido: %d", numero_flutuante);
    return 0;
}