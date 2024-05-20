#include <stdio.h>
#include <conio.h>

int main() {

printf("Este Programa Calculará la Suma de los Cuadrados de los Primeros 100 Números Naturales.\n");
   
    int Suma = 0;

    for (int i = 1; i <= 100; i++) {
        Suma += i * i;
    }

    printf("Dicha Suma es: %d\n", Suma);

    return 0;
}
