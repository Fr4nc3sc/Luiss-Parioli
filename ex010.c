#include <stdio.h>

int main() {

int numero1;
int numero2;
int numero3;
printf("inserisci il numero1, il numero2 e il numero3\n");
scanf("%d %d %d", &numero1, &numero2, &numero3);

if(numero1 != numero2 && numero1 != numero3 && numero2 != numero3){
    printf("il triangolo è scaleno");
}
else if((numero1 == numero2 || numero2 == numero3 || numero1 == numero3) && numero1 != numero3 || numero1 != numero2 || numero2 != numero3)
{
    printf("il triangolo è isoscele");
}
else 
{
    printf("il triangolo è equilatero");
}
return 0;
}