#include <cs50.h>
#include <stdio.h>

int main ()
{
    // Declaração das variáveis
    int vinteCinco, dez, cinco, um;
    float coin [4] = {0.25, 0.10, 0.05, 0.01};
    float preco = 0, troco, valorPago;

    // Loop para segurar o usuário até digitar os valores válidos
    while(preco <= 0 || valorPago <= preco)
    {
        // Pede os valores para o usuário
        preco = get_float("Digite o preco: ");
        valorPago = get_float("Digite o valor pago: ");
    }
        troco = valorPago - preco;      // Calcula o valor do troco
        printf("O valor do troco sera de: %.2f", troco);    // Informa o valor do troco
        
        // Verifica qual a maior moeda possivel para o troco
        vinteCinco = (int)(troco/coin[0]);
        troco = troco - (vinteCinco*coin[0]);

        dez = (int)(troco/coin[1]);
        troco = troco - (dez*coin[1]);

        cinco = (int)(troco/coin[2]);
        troco = troco - (cinco*coin[2]);

        um = (int)(troco/coin[3]);
        troco = troco - (um*coin[3]);

        // Imprime o resultado na tela
        printf("\n\nDe ao cliente:\n");
        if (vinteCinco > 0)
        {
            printf("%d moedas de 25 centavos\n", vinteCinco);
        }
        if (dez > 0)
        {
            printf("%d moedas de 10 centavos\n", dez);
        }
        if (cinco > 0)
        {
            printf("%d moedas de 5 centavos\n", cinco);
        }
        if (um > 0)
        {
            printf("%d moedas de 1 centavo\n", um);
        }
    return 0;
}
