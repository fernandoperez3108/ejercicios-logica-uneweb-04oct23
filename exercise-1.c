#include <stdio.h>

int main () {
    int i, numero, cont = 0;

    printf("digite un numero: ");
    scanf("%i", &numero);

    for(i = 1; i <= numero; i++){
        if (numero % i == 0){
            cont++;
        }
    }
    if(cont > 2){
        printf("el numero %i no es primo\n", numero);
    }
    else {
        printf("el numero %i es primo\n",numero);
    }
    return 0;
}