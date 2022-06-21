#include <iostream>
#include <string>

using namespace std;

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
        cout << "Digite o preco: ";
        cin >> preco;
        cout << "Digite o valor pago: ";
        cin >> valorPago;
    }
        troco = valorPago - preco;          // Calcula o valor do troco
        cout << "O valor do troco sera de: " << troco;          // Informa o valor do troco

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
        cout << "\n\nDe ao cliente:\n";
        if (vinteCinco > 0)
        {
            cout << vinteCinco << " moedas de 25" <<  "\n";
        }
        if (dez > 0)
        {
            cout <<  dez << " moedas de 10" << "\n";
        }
        if (cinco > 0)
        {
            cout <<  cinco <<  " moedas de 5" <<"\n";
        }
        if (um > 0)
        {
            cout <<  um << " moedas de 1" <<"\n";
        }
    return 0;
}
