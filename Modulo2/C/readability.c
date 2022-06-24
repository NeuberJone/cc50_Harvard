#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main ()
{
    // Declaração das variáveis
    char line [500], caractere;
    int i = 0, words = 1, sentances = 0, letters = 0, index;
    float S, L;

    do 
    {
        caractere = getchar ();
        line [i] = caractere;
        i = i + 1;
    }
    while (caractere != '\n');
    line [i - 1] = '\0';

    for (i = 0; line[i] != '\0'; i++)
    {
        if (line[i] == ' ')
        {
            words ++;
        }
        if (line[i] == '.' || line[i] == '!' || line[i] == '?')
        {
            sentances ++;
        }
        if ((line[i] >= 'a') && (line [i] <= 'z') || (line[i] >= 'A') && (line [i] <= 'Z'))
        {
            letters++;
        }
    }

    L = ((float)letters * (100 / (float)words));
    S = ((float)sentances * (100/ (float)words));
    index = round((0.0588 * L) - (0.296 * S) - 15.8);

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
