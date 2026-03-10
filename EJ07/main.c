#include "punto.h"
#include <stdio.h>

int main() 
{
    Punto punto = {4, 5};
    escalar(&punto, 10);
    printf("X: %d, Y: %d\n", punto.x, punto.y);

    return 0;
}