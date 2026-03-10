#include "cadenas.c"
#include "cadenas.h"
#include <stdio.h>
#include <stdio.h>


int main()
{
    char c[] = "ladron de pat";

    char c2[] = "pam pam pam";

    imprimir(c);

    printf("\n");

    int size = longitud(c);
    printf("Longitud: %i", size);

    printf("\n");

    copiar(c, c2);
    printf(c);

    printf("\n");

    //void concatenar(char * c1, char * c2);

    char* clon = clonar(c);
    printf(clon);

    return 0;
}