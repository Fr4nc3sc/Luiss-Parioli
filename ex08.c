#include <stdio.h>

int main() {

int numero1;
printf("inserisci il primo numero\n");
scanf("%d", &numero1);

int numero2;
printf("inserisci il secondo numero\n");
scanf("%d", &numero2);

if(numero1%numero2)
{
    printf ("il secondo numero è multiplo del primo\n");
}
else
{
    printf ("il secondo numero non è multiplo del primo\n");
}

return 0;
}