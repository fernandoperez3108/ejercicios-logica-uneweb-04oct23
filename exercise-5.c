/*
5. HACER UNA FUNCION QUE IMPRIMA LOS PRIMEROS "n" NUMEROS PRIMOS.
*/

#include <stdio.h>

int main() {
    int i, j, numero, cont = 0;

    printf("digite un numero: ");
    scanf("%i", &numero);
    
    for (i = 1; i <= numero; i++) {
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                cont++;
            }
        }
        if (cont == 2) {
            printf("%i ", i);
        }

        cont = 0;
    }

    return 0;
}