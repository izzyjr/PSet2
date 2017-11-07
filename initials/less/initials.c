#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string();
    if (name != NULL)
    {
        for (int i = 0, length = strlen(name); i < length; i++)
        {
            if (i == 0)
            {
                printf("%c", toupper(name[i]));
            }
            else if (name[i] == 32)
            {
                printf("%c", toupper(name[i + 1]));
            }
        }
        printf("\n");
    }
}