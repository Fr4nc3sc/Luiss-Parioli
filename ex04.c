#include <stdio.h>

int main() {
    float numero1, numero2, somma, divisione, moltiplicazione, sottrazione;
printf("inserisci il primo numero: ");
scanf("%f", &numero1);
printf("inserisci il secondo numero: ");
scanf("%f", &numero2);
somma= numero1 + numero2;
printf("la somma di %f e %f è %.2f\n", numero1, numero2, somma);
divisione= numero1 / numero2;
printf("la divisione di %f e %f è %.2f\n", numero1, numero2, divisione);
moltiplicazione= numero1 * numero2;
printf("la moltiplicazione di %f e %f è %.2f\n", numero1, numero2, moltiplicazione);
sottrazione= numero1 - numero2;
printf("la sottrazione di %f e %f è %.2f\n", numero1, numero2, sottrazione);
return 0;

}