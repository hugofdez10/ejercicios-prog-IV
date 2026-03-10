#include <stdio.h>

int main()
{
    FILE * f = fopen("prueba.txt", "r");
    char c = fgetc(f);
    int i = 0;
    while(c != EOF)
    {
        printf("%c", c);
        if(c == '\n') i++;
        c = fgetc(f);
    }
    printf("Hay %d lineas", i);

    fclose(f);
}