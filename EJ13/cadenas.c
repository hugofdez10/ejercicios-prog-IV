#include <string.h>  
#include <stdlib.h>  
#include "cadenas.h"
#include <stdio.h>

void imprimir(char * c)
{
    int i = 0;
    while(c[i] != '\0' ) {
        printf("%c", c[i]);
        i++;
    }
}

int longitud(char * c)
{
    int i = 0;
    while(c[i] != '\0' ) {
        i++;
    }
    return i;
}

void copiar(char * c1, char * c2)
{
    int i = 0;
    while(c2[i] != '\0')
    {
        c1[i] = c2[i];
        i++;
    }
}

void concatenar(char * c1, char * c2)
{

}

char * clonar(char *c)
{
    int size = longitud(c);
    
    char *clon = (char *)malloc((size + 1) * sizeof(char));
    
    copiar(clon, c); 
    
    clon[size] = '\0'; 
    
    return clon;
}