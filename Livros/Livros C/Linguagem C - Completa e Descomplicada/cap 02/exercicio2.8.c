//   8)  Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Insira dois números inteiros: \n");
    scanf("%d %d", &num1, &num2);

    printf("Ordem inversa: %d e %d", num2, num1);

    return 0;
}