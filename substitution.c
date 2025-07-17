//substitution

#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error!");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("There should be 26 Alphabets \n");
        return 1;
    }

    for (int i=0 ; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("Numbers are not allowed");
            return 1;
        }
        for (int j=i+1; j < strlen(argv[1]); j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("Duplicates are not allowed \n");
                return 1;
            }
        }
    }

    string given_letters = argv[1];
    string plain_text = get_string("Enter the letters : ");

        for (int i=0 ; i < strlen(plain_text); i++)
        {

            if (isalpha(plain_text[i]))
            {
                if (isupper(plain_text[i]))
                {
                printf("%c", toupper(given_letters[plain_text[i] - 65]));
                }

                else
                {
                printf("%c", tolower(given_letters[plain_text[i] - 97]));
                }

            }

            else
            {
                printf("%c", plain_text[i]);
            }

        }

        printf("\n");


}
