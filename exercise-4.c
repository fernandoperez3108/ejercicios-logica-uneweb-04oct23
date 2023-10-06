 /*
 4. HACER UNA FUNCION QUE ORDENE NUMEROS ENTEROS DE UN ARREGLO DE FORMA ASCENDENTE.
 */

#include <stdio.h>

int main() {
    int i, j, aux, numeros[10] = {5, 3, 2, 4, 1, 5, 3, 2, 4, 1};

    for (i =0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (numeros[i] < numeros[j]) {
                aux = numeros[i];
                numeros[i]= numeros[j];
                numeros[j]= aux;
            }
        }
    }

    printf("los numeros ordenados son: ");
    for (i = 0; i < 10; i++) {
        printf("%i ", numeros[i]);
    }

    return 0;
    }

