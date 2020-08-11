#include <stdio.h>

// Enteros
    // (%d, %i), %u, %x, %o
// Enteros largos
    // %ld, %li, %lu

int main() {
    int num = 0x123AB;
    int ancho = 20;

    // Normal
    //printf("::%i::\n", num);

    // Ancho Campo
    //printf("::%15d::\n", num);

    // Ancho Variable
    //printf("::%*d::\n", ancho, num);

    // Izquierda
    //printf("::%-15d::\n", num);

    // Signo positivo
    //printf("::%+15d::\n", num);

    // Ceros
    //printf("::%15.10d::\n", num);

    // Hexadecimales
    printf("::%#x::\n", num);

    // Hexadecimales
    printf("::%#o::\n", num);
    return 0;
}
