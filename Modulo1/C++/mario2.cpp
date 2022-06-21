#include <iostream>
#include <string>

using namespace std;

int main ()
{
    // Declaração das variáveis
    int i,j,n = 9;

    // Loop para segurar o usuário até que ele entre com um número válido
    while(n > 8 || n < 0)
    {
        cout << "Digite o valor de n: ";
        cin >> n;
    }
        // Loops para imprimir a pirâmide no tamanho que o usuário definiu
        for(i = 1; i <= n; i++)
        {
            for(j = n - i; j >= 1; j--)            // Loop para imprimir os espaços
        {
            cout << " ";
        }
        for(j = 1;j <= i; j++)            // Loop para imprimir as #
        {
            cout << "#";
        }
        cout << "  ";            // Faz o espaço entre as pirâmides
        for(j = 1;j <= i; j++)            // Loop para imprimir as #
        {
            cout << "#";
        }
            for(j = n - i; j >= 1; j--)            // Loop para imprimir os espaços
        {
            cout << " ";
        }
        cout << "\n";

    }

    return 0;
}