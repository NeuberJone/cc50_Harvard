#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int vinteCinco, dez, cinco, um;
    float coin [4] = {0.25, 0.10, 0.5, 0.1};
    float preco = 0, troco, valorPago;

    while(preco <= 0 || valorPago <= preco)
    {
        printf("Digite o preco: ");
        scanf("%f", &preco);
        printf("Digite o valor pago: ");
        scanf("%f", &valorPago);
        troco = valorPago - preco;
    }
            while (vinteCinco * coin[0] <= troco)
            {
                vinteCinco++;
            }
            troco = (vinteCinco * coin[0]) - troco;

            while (dez * coin[1] <= troco)
            {
                dez++;
            }
            troco = (dez * coin[1] - troco);

            while (cinco * coin[2] <= troco)
            {
                cinco++;
            }
            troco = (cinco * coin[2] - troco);

            while (um * coin[3] <= troco)
            {
                um++;
            }
            troco = (um * coin[3] - troco);
            printf ("De ao cliente:");

            if (vinteCinco > 0)
            {
                printf(" %d moedas de 25 ", vinteCinco);
            }
            if (dez > 0)
            {
                printf(" %d moedas de 10 ", dez);
            }
            if (cinco > 0)
            {
                printf(" %d moedas de 5 ", cinco);
            }
            if (um > 0)
            {
                printf(" %d moedas de 1 ", um);
            }

    return 0;
}
