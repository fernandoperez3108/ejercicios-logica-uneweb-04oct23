/*
HACER UNA FUNCION QUE DIGA SI UNA CADENA HAY SOLO DIGITOS
*/

#include <stdio.h>
#include<string.h>

int main() {
    char cadena[100];
    int i, cont = 0;

    printf("digite una cadena: ");
    gets(cadena);

    for(i = 0; i < strlen(cadena); i++) {
        if(cadena[i] > '0' && cadena[i] <= '9'){
            cont++;
        }
    }
    if (cont == strlen(cadena)) {
        printf("la cadena %s tiene solo digitos\n", cadena);
    }
    else {
        printf("la cadena %s no tiene solo digitos\n", cadena);
    }

    return 0;
}