#include "complexNumber.h"
#include <math.h>
#include <stdio.h>

void imprimir(Complex c)
{
    printf("(%.2f, i%.2f)", c.r, c.i);
}
Complex sumar(Complex c1, Complex c2)
{
    Complex c;
    c.r = c1.r + c2.r;
    c.i = c1.i + c2.i;
    return c;
}
float modulo(Complex c)
{
    return sqrt(c.r * c.r + c.i * c.i);
}