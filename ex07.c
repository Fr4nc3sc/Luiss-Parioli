#include <stdio.h>

int main() {

int anni;
printf("quanti anni hai?\n");
scanf("%d", &anni);
printf ("a quanti anni si può prendere la patente dove vivi?\n");

int annipatente;
scanf("%d", &annipatente);

if(anni>=annipatente)
{
    printf ("puoi prendere la patente\n");
}
else
{
    printf ("NON puoi prendere la patente\n");
}

return 0;
}