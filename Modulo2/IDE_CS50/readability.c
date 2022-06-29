#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int get_index(string s)
{
    int letters = 0, sentences = 0, words = 1;
    for(int i = 0; i < strlen(s); i++)
    {
        char caractere = s[i];
        if (isalpha(caractere))
        {
            letters++;
        }
        if (isspace(caractere))
        {
            words++;
        }
        if (caractere == '.' || caractere == '!' || caractere == '?')
        {
            sentences++;
        }
    }

    float L = (letters * 100.0f) / words;
    float S = (sentences * 100.0f) / words;
    return round(0.0588 * L - 0.296 * S - 15.8);


}

int main ()
{
    string text = get_string("Text: ");
    int index = get_index(text);

    if (index < 1)
    {
        printf("Before Grande 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }

    return 0;
}