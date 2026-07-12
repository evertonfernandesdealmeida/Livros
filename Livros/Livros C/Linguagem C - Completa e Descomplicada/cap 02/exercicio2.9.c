//  9)  Faça um programa que leia dois valores do tipo float. Use um único comando de  leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.

#include <stdio.h>

int main() {
    float flutuante1;
    float flutuante2;

    printf("Insira o valor da flutuante 1 e da flutuante 2: \n");
    scanf("%f %f", &flutuante1, &flutuante2);

    printf("Ordem Inversa = %.3f e %.3f", flutuante2, flutuante1);

    return 0;
}