// 11)  Elabore um programa que contenha uma constante qualquer do tipo float. Use o comando #define. Imprima essa constante.

#include <stdio.h>
#define constante_de_euler 2.71828; 

int main() {
    float contante = constante_de_euler;

    printf("#define constante_de_euler = %f\n", contante);

    return 0;
}