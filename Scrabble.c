//Scrabble

#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<string.h>

int result(string word);
int compute(string word);

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


int main(void)
{
    string word1 = get_string("Enter word1 : ");
    string word2 = get_string("Enter word2 : ");

    int score1 = compute(word1);
    int score2 = compute(word2);

    if (score1 > score2)
    {
        printf("Player 1 is the winner!");
    }
    else
    {
        printf("Player 2 is the winner!");
    }

}


int compute(string word)
{
    int score = 0;
    for (int i =0 ; i < strlen(word); i++)
    {
    if (word[i] < 90 && word[i] > 65)
    {
        score = score + POINTS[word[i] - 65];
    }

    else
    {
        score = score + POINTS[word[i] - 97];
    }

    }
    return score;
}
