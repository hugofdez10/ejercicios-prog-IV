#ifndef COMPLEXNUMBER_H_
#define COMPLEXNUMBER_H_

typedef struct
{
    float r;
    float i;
}Complex;

void imprimir(Complex c);
Complex sumar(Complex c1, Complex c2);
float modulo(Complex c);


#endif /* COMPLEXNUMBER_H_*/