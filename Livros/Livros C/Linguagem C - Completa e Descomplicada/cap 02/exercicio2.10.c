// 10)  Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano  (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).

#include <stdio.h>

int main() {
    int dia, mes, ano;
    
    printf("Insira o valor do dia, mes e ano: \n");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("DATA = %d/%d/%d", dia, mes, ano);

    return 0;
}