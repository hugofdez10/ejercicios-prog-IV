#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Punto;

//Multipicamos los puntos por el numero entero
void escalar(Punto *a[], int *b, int size)
{
    for(int i = 0; i < size; i++)
    {
        a[i]->x *= b[i];
        a[i]->y *= b[i];
    }
}

void imprimir(Punto *a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("(%i, %i)\n", a[i]->x, a[i]->y);
    }
}

int main()
{
    //int array[] = {1,3,4};

    int array[3];
    *array = 1;
    array[1] = 2;
    *(array + 2) = 3;

    Punto **arrayPP = malloc(sizeof(Punto*) * 3);

    //Punto 1
    Punto p1 = {2,4};

    //Punto 2
    Punto p2;
    p2.x = 6;
    p2.y = 8;

    //Punto 3
    Punto *p3 = malloc(sizeof(Punto));
    p3 -> x = 10;
    p3 -> y = 12;

    //Añadimos los puntos al arrayPP
    arrayPP[0] = &p1;
    arrayPP[1] = &p2;
    arrayPP[2] = p3;

    //Imprimimos los puntos escalados
    escalar(arrayPP, array, 3);
    imprimir(arrayPP, 3);

    free(arrayPP);
    free(p3);
    return 0;
}