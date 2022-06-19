#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int population = 0, inicio = 0, end = 0, i, born = 0, dead = 0;

    //Pede o número do cartão ao usuário

    while (inicio <= 9)
    {
        printf ("Digite o tamanho inicial da populacao de lhamas: ");
        scanf ("%d", &inicio);
    }
    while (end < inicio)
    {
        printf ("Digite o tamanho final da populacao de lhamas: ");
        scanf ("%d", &end);
    }
    population = inicio;
    for ( i = 0; population <= end; i++)
    {
        born = population / 3;
        dead = population / 4;
        population = (population + born) - dead;
    }
    printf ("\nLevara %d ano(s) para a populacao de %d chegar a %d", i, inicio, end);
    return 0;
}
