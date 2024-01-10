#include <stdio.h>

void ft_interative_power(int nb, int power)
{
    int res;
    res = nb;
    if(power < 0){
      printf("%d", 0);
    }
    if(power == 0){
      printf("%d", 1);
    }
    while(power --> 1){
        res *= nb;
    }
    printf("%d", res);
    
}
int main ()
{
    int nb, power;
    printf("Inserisci un numero\n");
    scanf("%d %d", &nb, &power);
    ft_interative_power(nb, power);
    return (0);
}