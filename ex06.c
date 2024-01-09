#include <stdio.h>
int main() {
int numero;
printf("inserisci un numero (fino a dieci): ");
scanf("%d", &numero);
if (numero >= 0 && numero <= 10){
    if (numero % 2 == 0){
        printf("il numero %d è pari.\n", numero);
    } else {
        printf("il numero %d è dispari.\n", numero);
    }


}else {
    printf("inserisci un numero valido nell'intervallo da 0 a 10.\n");
}

return 0;
}