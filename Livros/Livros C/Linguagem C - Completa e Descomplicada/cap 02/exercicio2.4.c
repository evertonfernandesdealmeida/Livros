//  4) Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.

#include <stdio.h>

int main() {
    int numero_flutuante;
    printf("Leia um número inteiro flutuante: \n");
    scanf("%d", &numero_flutuante);

    printf("numero flutuante: %f", numero_flutuante);

    return 0;
}