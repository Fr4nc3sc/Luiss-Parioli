#include <stdio.h>
#include <math.h>

int main(){

float latoA, latoB, latoC, perimetro, area, semiperimetro;
printf("inserisci latoA: ");
scanf("%f", &latoA);
printf("inserisci latoB: ");
scanf("%f", &latoB);
printf("inserisci latoC: ");
scanf("%f", &latoC);
perimetro = latoA + latoB + latoC;
printf("il perimetro è %f\n", perimetro);
semiperimetro = perimetro / 2;
printf("il semiperimetro è %f\n", semiperimetro);
area = (semiperimetro * (semiperimetro - latoA) * (semiperimetro - latoB) * (semiperimetro - latoC));
printf("L'area del triangolo è %f\n", area);

return 0;
}