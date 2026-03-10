#include <stdio.h>

typedef struct
{
    int x;
    int y;
}Punto;

void escalar(Punto *p1, int n) 
{
    p1->x += n;
    p1->y += n;
}
