#include "complexNumber.c"
#include <stdio.h>

int main()
{
    Complex c1 = {2.0, 4.0};
    Complex c2;
    c2.r = 3.0;
    c2.i = 6.0;

    Complex c3 = sumar(c1, c2);
    imprimir(c3);

    printf("\nmodulo : %f", modulo(c3));

    printf("\nBytes: %i", sizeof(c3));

    return 0;
}