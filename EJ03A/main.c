#include <stdio.h>

int main() {
    char letra;

    printf("Introduce letras (presiona 'q' para salir):\n");

    do {
        letra = getchar();

        if (letra != '\n' && letra != 'q') {
            
            char resultado = letra - 32;
          
            printf("Has introducido la letra '%c'. ASCII = %d. Resultado: %c\n", letra, (int)letra, resultado);
                
            while (getchar() != '\n'); 
        }

    } while (letra != 'q');

    printf("Programa finalizado.\n");

    return 0;
}