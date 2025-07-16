//Readability

#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>

int sentence_calc(string text);
int words_calc(string text);
int letters_calc(string text);

int main(void)
{
    string text = get_string("Enter the text : ");

    int letters = letters_calc(text);
    int words = words_calc(text);
    int sentence = sentence_calc(text);

    float L = (float) letters / words * 100;
    float S = (float) sentence / words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1");
    }

    else if (index > 16)
    {
        printf("Grade 16 and above");
    }

    else
    {
        printf("%i Grade",index);
    }



}

int letters_calc(string text)
{
    int letters = 0;
    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
        {
            letters++;
        }
    }

    return letters;
}

int words_calc(string text)
{
    int words = 1;
    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}

int sentence_calc(string text)
{
    int sentence = 0;
    for (int i = 0;i < strlen(text) ; i++)
    {
        if (text[i] == '?' || text[i] == '!' || text[i] == '.')
        {
            sentence++;
        }
    }
    return sentence;
}
