#include <cs50.h>
#include <stdio.h>

int main ()
{
    // Declaração das variáveis
    int i,j,n = 9;

    // Loop para segurar o usuário até que ele entre com um número válido
    while(n > 8 || n < 0)
    {
        n = get_int("Digite o valor de n: ");
    }
    // Loops para imprimir a pirâmide no tamanho que o usuário definiu
    for(i = 1; i <= n; i++)
    {
        for(j = n - i; j >= 1; j--)            // Loop para imprimir os espaços
        {
            printf(" ");
        }
        for(j = 1;j <= i; j++)            // Loop para imprimir as #
        {
            printf("#");
        }
    printf("\n");
    }

    return 0;
}