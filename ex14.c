#include <stdio.h>

int main() {

float numerounità;
float prezzo = 5;
float somma;

while(1) {
    printf("Inserire un numero\n");
    scanf("%f", &numerounità);
    if(numerounità < 30 && numerounità > 0) {
        somma = prezzo * numerounità;
        printf("%f\n", somma);
        
    }
    else if (numerounità > 30 && numerounità < 50) {
        somma = prezzo * numerounità * 0.90;
        printf("%f\n", somma);
    }
    else if (numerounità > 50) {
        somma = prezzo * numerounità * 0.85;
        printf("%f\n", somma);
    }
    else if(numerounità <= 0){
        break;
    }
}
return 0;
}