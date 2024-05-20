#include <stdio.h>
#include <conio.h>

int main() {

printf("Este Programa te Permitirá Visualizar la Suma de Todos los Números Pares Comprendidos entre 1 y 200, y por otra Parte los Impares.\n");

    int Sum_Pares = 0;
    int Sum_Impares = 0;

    for (int i = 1; i <= 200; i++) {
        if (i % 2 == 0) {
            Sum_Pares += i;
        } else {
            Sum_Impares += i;
        }
    }

    printf("La Suma de los Números Pares es: %d\n", Sum_Pares);
    printf("La Suma de los Números Impares es: %d\n", Sum_Impares);

    return 0;
}
