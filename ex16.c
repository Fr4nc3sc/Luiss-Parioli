#include <stdio.h>

int ft_interative_power(int nb, int power)
{
    int res;
    res = nb;
    if(power < 0){
        return 0;
    }
    if(power == 0){
        return 1;
    }
    while(power --> 1){
        res *= nb;
    }
    return res;
}
int main ()
{

    int nb;
    int power;
    printf("Inserisci un numero\n");
    scanf("%d %d", &nb, &power);
    int res = ft_interative_power(nb, power);
    printf("%d" , res);
    return 0;
}