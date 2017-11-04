#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar k");
        return 1;
    }
    int k = atoi(argv[1]);
    printf("plaintext: ");
    string p = get_string();
    printf("ciphertext: ");

    for(int i = 0; i < strlen(p); i++)
    {
        if(isalpha(p[i]))
        {
            if(p[i] >= 65 && p[i] <= 90)
            {
                if(p[i] + (k % 26) > 90)
                {
                    printf("%c", p[i] + (k % 26) - 26);
                }
                else
                {
                    printf("%c", p[i] + (k % 26));
                }
            }
            else
            {
                if(p[i] + (k % 26) > 122)
                {
                    printf("%c", p[i] + (k % 26) - 26);
                }
                else
                {
                    printf("%c", p[i] + (k % 26));
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