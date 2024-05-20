#include <stdio.h>
#include <conio.h>

int main() {

    printf("Este Programa a Partir de 10 Números Enteros Ingresados por el Usuario, Presentará la Suma de los Números Pares de la Lista, Cuántos Pares Existen y Cuál es la Media Aritmética de tales Números.\n");

    int Num[10];
    int Sum_Pares = 0;
    int Can_Pares = 0;
    float Media_Pares;

    printf("Introduzca 10 Números Enteros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &Num[i]);
        
        if (Num[i] % 2 == 0) {
            Sum_Pares += Num[i];
            Media_Pares++;
        }
    }

     if (Can_Pares > 0) {
        Media_Pares = (float)Sum_Pares / Can_Pares;
    } else {
        Media_Pares = 0;
    }
    printf("La Suma de los Números Pares es: %d\n", Sum_Pares);
    printf("La Cantidad de Números Pares es: %d\n", Can_Pares);
    printf("La Media Aritmética de los Números Pares es: %.2f\n", Media_Pares);

    return 0;
}
