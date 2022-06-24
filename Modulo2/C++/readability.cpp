#include <math.h>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    // Declaração das variáveis
    string line;
    int i = 0, words = 1, sentances = 0, letters = 0, index;
    float S, L;

    cin >> line;
    line [i - 1] = '\0';

    for (i = 0; line[i] != '\0'; i++)
    {
        cout << "posição atual do i" << i << "\n";
        if (line[i] == ' ')
        {
            cout <<  "posição atual do words" << words << "\n";
            words ++;
            
        }
        if (line[i] == '.' || line[i] == '!' || line[i] == '?')
        {
            cout <<  "posição atual do frase" << sentances << "\n";
            sentances ++;
            
        }
        if ((line[i] >= 'a') && (line [i] <= 'z') || (line[i] >= 'A') && (line [i] <= 'Z'))
        {
            cout << letters << "\n";
            letters++;
        }
    }

    L = ((float)letters * (100 / (float)words));
    S = ((float)sentances * (100/ (float)words));
    index = round((0.0588 * L) - (0.296 * S) - 15.8);
    cout << index << "\n";
    if (index < 1)
    {
        printf("\nBefore grade 1\n");
    }
    else if (index > 16)
    {
        printf("\nGrade 16+\n");
    }
    else
    {
        printf("\nGrade %i\n", (int)index);
    }
    
    return 0;
}