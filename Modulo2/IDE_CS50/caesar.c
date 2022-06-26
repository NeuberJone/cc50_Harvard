#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

char alpharay1[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char alpharay2[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(int argc, string argv[])
{

    int key = 0;
    int correctedvalue = 0;

    if (argc == 1)
    {
        printf("Command-line argument is blank\n");
        return 1;
    }

    key = atoi(argv[1]);

    for (int i = 0; i < argv[1][i]; i++)
    {
        if ((argv[1][i] < '0') || (argv[1][i] > '9'))
        {
            printf("Character is not a number\n");
            return 1;
        }
        else if (key < 1)
        {
            printf("Character is negative\n");
            return 1;
        }
        else if (argc != 2)
        {
            printf("Command-line argument counter isn't 2\n");
            return 1;
        }
    }

    string plaintext = get_string("plaintext: ");

    string ciphertext = plaintext;

    int textlength = strlen(plaintext);

    for (int j = 0; j < textlength; j++)

        if (plaintext[j] >= 'a' && plaintext[j] <= 'z')
        {
            for (int k = 0; k < 26; k++)
            {
                if (plaintext[j] == alpharay1[k])
                {
                    correctedvalue = k;
                }
            }
            ciphertext[j] = alpharay1[(correctedvalue + key) % 26];
        }

        else if (plaintext[j] >= 'A' && plaintext[j] <= 'Z')
        {
            for (int l = 0; l < 26; l++)
            {
                if (plaintext[j] == alpharay2[l])
                {
                    correctedvalue = l;
                }
            }

            ciphertext[j] = alpharay2[(correctedvalue + key) % 26];
        }
    printf("ciphertext: %s\n", ciphertext);
}