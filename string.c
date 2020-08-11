#include <stdio.h>

//  String
//  %s


int main() {
    char cadena[] = "Una cadena de caracteres";

    // Normal
    //printf("::%s::\n", cadena);

    // Tamaño de campo - Izq.
    //printf("::%-20s::\n", cadena);

    printf("::%-10.6s::\n", cadena);

    return 0;
}
