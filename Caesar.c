//caesar cipher

#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Errorrrr");
        return 1;
    }

    for (int i=0 ; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Errorrr...Please use only numbers \n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    string plaintext = get_string("Plaintext : ");
    printf("Ciphertext : \n");

    for (int j=0 ; j < strlen(plaintext); j++)
    {
        if ((plaintext[j] >= 65) && (plaintext[j] <= 90))
        {
            printf("%c",(plaintext[j] - 65 + key) % 26 + 65);
        }

        else if ((plaintext[j] >= 97) && (plaintext[j] <= 122))
        {
            printf("%c",(plaintext[j] - 97 + key) % 26 + 97);
        }

        else
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");

}
