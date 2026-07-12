// 7)  Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.

#include <stdio.h>

int main(){
    int numero_inteiro;
    printf("Insira um valor inteiro: ");
    scanf("%d", &numero_inteiro);

    printf("Valor lido: %d\n", numero_inteiro);
    return 0;
}