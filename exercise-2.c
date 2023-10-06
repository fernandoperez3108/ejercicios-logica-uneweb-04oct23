/*
2. hacer una funcion que diga si un caracter esta en un cadena 
*/

#include <stdio.h> 
#include <string.h>

int main() {
    char cadena [100], caracter;
    int i, cont = 0;

    printf("digite una cadena: ");
    gets(cadena);
    printf("digite un caracter: ");
    scanf("%c", &caracter);

    for(i = 0; i < strlen(cadena); i++){
        if (cadena[i] == caracter) {
            cont++;
        }
    }

    if (cont > 0) {
        printf("el caracter %c esta en la cadena %s\n", caracter, cadena);
    } else {
        printf("el caracter %c no esta en la cadena %s\n", caracter, cadena);
    }
}
