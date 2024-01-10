#include <stdio.h>

int main() {

int numero;
int primo = 1;
printf("inserisci un numero\n");
scanf("%d", &numero);
for(int i = 2; i < numero; i++){
    if(numero &i == 0){
        primo = 0;
    }
    }
    if(primo == 1){
        printf("il numero è primo");
    }
    else if(primo == 0){
        printf("il numero non è primo");
    }

    return 0;
}