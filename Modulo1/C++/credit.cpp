#include <iostream>
#include <string>

using namespace std;

int main ()
{
    long long card, cardCopy;
    int somaA, somaB = 0,somaT, digito, mult, i = 0, a;

    cardCopy = card;
    //Pede o numero do cartao ao usuario
    do
    {
        cout << "Digite o numero do cartao de credito: ";
        cin >> card;
    }
    while (card < 0);

    //Loop para fazer a primeira soma os digitos do numero do cartao
    while (cardCopy > 0)
    {
        digito = cardCopy % 10;             // Obtem o ultimo dígito
        mult = digito * 2;                  // Multiplica o ultimo dígito por dois
        somaA = somaA + (mult % 10) + (mult / 10);          //Somo os dígitos da multiplicação
        cardCopy = cardCopy / 100;          // Faz a divisão para remover os ultimos dois dígitos e faz com o programa leia o próximo dígito 
        i ++;
    }
    
    //Loop para fazer a segunda soma os digitos do numero do cartao
    cardCopy = card / 10;
    while (cardCopy > 0)
    {
        digito = cardCopy % 10;             // Obtem o ultimo dígito
        somaB = somaB + digito;             // Inclui o ultimo dígito a soma
        cardCopy = cardCopy / 100;          // Faz a divisão para remover os ultimos dois dígitos e faz com o programa leia o próximo dígito
        a = digito;                         // Guarda o ultimo dígito
        i ++;
    }
    //Soma os dois resultados
    somaT = somaA + somaB;

    //Verifica se o cartao e valido e informa a bandeira do cartão
    if ((i == 13 || i == 16) && (somaT % 10) == 0 && digito == 4)
    {
       cout << "\nO cartao numero " << card << " e um cartao VISA valido.";
    }
    else if (i == 15 && ((somaT % 10) == 0) && (digito == 3 || digito == 4 || digito == 7) && (a == 4 || a == 7 || a == 3))
    {
        cout << "\nO cartao numero " << card << " e um cartao American Express valido.";
    }
    else if (i == 16 && ((somaT % 10) == 0) && (digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5) && (a == 1 || a == 2 || a == 3 || a == 4 || a == 5))
    {
        cout << "\nO cartao numero " << card << " e um cartao MasterCard valido.";
    }
    else
    {
        cout << "\nO cartao numero " << card << " nao e valido.";
    }
    return 0;
}
