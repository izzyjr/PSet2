#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        for(int i = 0; i < strlen(argv[1]); i++)
        {
            if(isalpha(argv[1][i]) == false)
            {
                printf("Usage: ./vigenere k \n");
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./vigenere k \n");
        return 1;
    }
    string k = argv[1];
    printf("plaintext: ");
    string p = get_string();
    printf("ciphertext: ");
    int count = -1;

    for(int i = 0; i < strlen(p); i++)
    {
        if(isalpha(p[i]))
        {
            count++;
            int j = count % strlen(k);
            if(isupper(p[i]))
            {
                if(isupper(k[j]))
                {
                    printf("%c", ((p[i] + k[j]) % 26) + 65);
                }
                else
                {
                    printf("%c", ((p[i] + (k[j] - 32)) % 26) + 65);
                }
            }
            else if(islower(p[i]))
            {
                if(islower(k[j]))
                {
                    if(((p[i] + k[j]) % 26) + 85 < 97)
                    {
                        printf("%c", ((p[i] + k[j]) % 26) + 111);
                    }
                    else
                    {
                        printf("%c", ((p[i] + k[j]) % 26) + 85);
                    }
                }
                else
                {
                    if(((p[i] + k[j]) % 26) + 85 < 97)
                    {
                        printf("%c", ((p[i] + (k[j] + 32)) % 26) + 111);
                    }
                    else
                    {
                        printf("%c", ((p[i] + (k[j] + 32)) % 26) + 85);
                    }
                }
            }
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
}