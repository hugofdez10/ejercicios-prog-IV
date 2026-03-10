#include <stdio.h>

int main()
{
    FILE* f = fopen("prueba.txt", "w");
    int N = 10;
    int i = 0;
    printf("Escribiendo %d numeros: \n", N);
    while(i < N)
    {
        fprintf(f, "%d \n", i);
        printf("%d \n", i);
        i++;
    }

    fclose(f);
}