#include <cs50.h>
#include <stdio.h>

int main ()
{
    // Declaração das variáveis
    int population = 0, inicio = 0, end = 0, i, born = 0, dead = 0;

    // Loop para segurar o usuário até que ele entre com um número válido
    while (inicio <= 9)
    {
        inicio = get_int("Digite o tamanho inicial da populacao de lhamas: ");
    }
    // Loop para segurar o usuário até que ele entre com um número válido
    while (end < inicio)
    {
        end = get_int("Digite o tamanho final da populacao de lhamas: ");
    }
    population = inicio;

    // Loop para fazer os calculos
    for ( i = 0; population <= end; i++)
    {
        born = population / 3;          // Calcula quantas lhamas nasceram no ano
        dead = population / 4;          // Calcula quantas lhamas morreram no ano
        population = (population + born) - dead;        // Faz o calculo somando as lhamas que nasceram na população e subtraindo as que morreram
    }
    
    // Imprime o resultado
    printf ("\nLevara %d ano(s) para a populacao de %d chegar a %d", i, inicio, end);
    return 0;
}
