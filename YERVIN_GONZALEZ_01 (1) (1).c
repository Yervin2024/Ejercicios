#include <stdio.h>
#include <conio.h>

int main() {

printf("Este Programa te Permitirá Calcular la Suma y el Producto de todos los Números Comprendidos entre 20 y 400, incluyendo a Ambos Extremos.\n");

    unsigned long long S = 0;
    unsigned long long P = 1;
    
    for (int i = 20; i <= 400; i++) {
        S += i;
        P *= i;
    }
    
    printf("La Suma es: %llu\n", S);
    printf("El Producto es: %llu\n", P);
    
    return 0;
}




