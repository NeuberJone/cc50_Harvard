#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int population = 0, inicio = 0, end = 0, i, born = 0, dead = 0;


    while (inicio <= 9)
    {
        cout << "Digite o tamanho inicial da populacao de lhamas: ";
        cin >> inicio;
    }
    while (end < inicio)
    {
        cout << "Digite o tamanho final da populacao de lhamas: ";
        cin >> end;
    }
    population = inicio;
    for ( i = 0; population <= end; i++)
    {
        born = population / 3;
        dead = population / 4;
        population = (population + born) - dead;
    }
    cout << "\nLevara " << i << " ano(s) para a populacao de " << inicio << "chegar a " << end;
    return 0;
}
