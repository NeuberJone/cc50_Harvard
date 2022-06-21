#include <iostream>
#include <string>

using namespace std;

int main ()
{
    // Declaração das variáveis
    int population = 0, inicio = 0, end = 0, i, born = 0, dead = 0;

    // Loop para segurar o usuário até que ele entre com um número válido
    while (inicio <= 9)
    {
        cout << "Digite o tamanho inicial da populacao de lhamas: ";
        cin >> inicio;
    }
    // Loop para segurar o usuário até que ele entre com um número válido
    while (end < inicio)
    {
        cout << "Digite o tamanho final da populacao de lhamas: ";
        cin >> end;
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
    cout << "\nLevara " << i << " ano(s) para a populacao de " << inicio << "chegar a " << end;
    return 0;
}
