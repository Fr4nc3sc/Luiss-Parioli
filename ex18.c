#include <stdio.h>

int main(){
    int numero;

    printf("Inserisci un numero positivo");
    scanf("%d",&numero);

    int fattoriale = 1;
    if(numero > 0){

        int i=1;
        while(i <= numero){
        fattoriale= fattoriale*i;
        i++;
        }

    }
    printf("Fattoriale: %d \n", fattoriale);

    return 0;
}