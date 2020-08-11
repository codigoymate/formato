#include <stdio.h>

//Punto Flotante (Reales)
// %f, %e, %E, %g, %G
// %a, %A


int main() {
    double num = 3.14159;

    // Normal
    //printf("%f\n", num);

    // Campo
    //printf("::%18.2f::\n", num);

    // Exponencial
    //printf("::%e::\n", num);

    //printf("::%.2e::\n", num);

    //printf("::%15.2E::\n", num);

    //printf("::%015.2E::\n", num);

    printf("::%a::\n", num);

    return 0;
}
