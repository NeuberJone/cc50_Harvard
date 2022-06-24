#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    // Declaração das variáveis
    char line [500];
    char caractere;
    int i = 0, space = 0, dot = 0;

    do 
    {
        caractere = getchar ();
        line [i] = caractere;
        i = i + 1;
    }
    while (caractere != '\n');
    line [i - 1] = '\0';
    for (i = 0; line[i] == '\0'; i++)
    {
        printf  ("i atual %d", i);
        if (line[i] == ' ')
        {
            space ++;
            printf  ("espaco atual %d", space);
        }
        if (line[i] == '.')
        {
            dot ++;
            printf  ("ponto %d", dot);
        }
    }
    printf  ("%d", i);
    printf  ("%d", space);
    printf  ("%d", dot);


    return 0;
}
