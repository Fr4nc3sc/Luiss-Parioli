#include <stdio.h>

int main() {
    int numero1, numero2, modulo;
printf("inserisci il primo numero: ");
scanf("%d", &numero1);
printf("inserisci il secondo numero: ");
scanf("%d", &numero2);
modulo= numero1%numero2;
printf("il modulo di %d e %d è %.2d\n", numero1, numero2, modulo);
}