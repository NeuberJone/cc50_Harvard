#include <cs50.h>
#include <stdio.h>

int main ()
{
    // Declaração das variáveis
    long long card, cardCopy;
    int somaA, somaB = 0,somaT, digito, mult, i = 0, a;

    //Pede o numero do cartao ao usuario
    do
    {
        card = get_long("Digite o numero do cartao de credito: ");
    }
    while (card < 0);
    cardCopy = card;

    cardCopy = card / 10;
    
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
        printf ("\nO cartao numero %lld e um cartao VISA valido", card);
    }
    else if (i == 15 && ((somaT % 10) == 0) && (digito == 3 || digito == 4 || digito == 7) && (a == 4 || a == 7 || a == 3))
    {
        printf ("\nO cartao numero %lld e um cartao American Express valido", card);
    }
    else if (i == 16 && ((somaT % 10) == 0) && (digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5) && (a == 1 || a == 2 || a == 3 || a == 4 || a == 5))
    {
        printf ("\nO cartao numero %lld e um cartao MasterCard valido", card);
    }
    else
    {
        printf ("\nO cartao numero %lld nao e valido", card);
    }
    return 0;
}
