#include <stdio.h>

int main() {

float celsius;
float kelvin;
float fahrenheit;
printf("inserisci la temperatura in celsius\n");
scanf("%f", &celsius);

if(celsius<-273.15)
{
    printf ("è errore\n");
}
else
{
    kelvin= celsius + 273.15;
    fahrenheit= celsius * 9/5 + 32;
    printf("La temperatura in kelvin è %f", kelvin);
    printf("La temperatura in fahrenheit è %f", fahrenheit);

}

return 0;
}