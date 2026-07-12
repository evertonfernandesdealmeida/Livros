//  6) Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica. 

#include <stdio.h>

int main() {
    double numero_double;
    printf("Leia um valor do tipo double: \n");
    scanf("%lf", &numero_double);

    printf("Notação científica: %lf", numero_double);
    return 0;
}