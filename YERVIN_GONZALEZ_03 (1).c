#include <stdio.h>
#include <conio.h>

int main() {

printf("Este es un Programa que Determinará el Mayor de los Números Ingresados.\n");
   
    int Num;
    int Max = 0;

    printf("Introduce una Serie de Números Positivos (Escribe -99 para Terminar):\n");

    do {
        scanf("%d", &Num);
        if (Num > Max && Num > 0) {
            Max = Num;
        }
    } while (Num != -99);

    printf("El Número Mayor Ingresado es: %d\n", Max);

    return 0;
}
    