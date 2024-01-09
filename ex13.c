#include <stdio.h>

int main() {

float somma;
float numero;
float media;
float i = 1;

printf("Inserire un numero\n");
scanf("%f", &numero);
somma = numero;

while(numero > 0){
    printf("Inserire un numero\n");
    scanf("%f" , &numero);
    somma += numero;
    i++;
    media = somma / i;
    if(numero > 0){
        printf("La media è %f\n" , media);
}
}
}