#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int vinteCinco, dez, cinco, um;
    float coin [4] = {0.25, 0.10, 0.05, 0.01};
    float preco = 0, troco, valorPago;

    while(preco <= 0 || valorPago <= preco)
    {
        printf("Digite o preco: ");
        scanf("%f", &preco);
        printf("Digite o valor pago: ");
        scanf("%f", &valorPago);
        troco = valorPago - preco;
        printf("O valor do troco sera de: %.2f", troco);
    }
        vinteCinco = (int)(troco/coin[0]);
        troco = troco - (vinteCinco*coin[0]);

        dez = (int)(troco/coin[1]);
        troco = troco - (dez*coin[1]);

        cinco = (int)(troco/coin[2]);
        troco = troco - (cinco*coin[2]);

        um = (int)(troco/coin[3]);
        troco = troco - (um*coin[3]);

        printf("\n\nDe ao cliente:\n");
        if (vinteCinco > 0)
        {
            printf("%d moedas de 25\n", vinteCinco);
        }
        if (dez > 0)
        {
            printf("%d moedas de 10\n", dez);
        }
        if (cinco > 0)
        {
            printf("%d moedas de 5\n", cinco);
        }
        if (um > 0)
        {
            printf("%d moedas de 1\n", um);
        }
    return 0;
}
