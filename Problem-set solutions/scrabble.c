#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// araay with all the scarbble values for each letter
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// array for ASCII values of lowercase letters
int lowercase[] = {97,  98,  99,  100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
                   110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

int uppercase[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
                   78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};

int temp_points[] = {};

int compute_score(string word);

int main(void)
{
    string word1 = get_string("Enter you word Player one : ");
    string word2 = get_string("Enter you word Player two : ");

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 is the Winner!");
    }
    else if (score2 > score1)
    {
        printf("Player 2 is the Winner!");
    }
    else
    {
        printf("Its a tie!!");
    }
}
int compute_score(string word)
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        // to check if it is uppercase
        if (isupper(word[i]))
        {

            for (int f = 0; f < sizeof(uppercase); f++)
            {
                if (word[i] == uppercase[f])
                {
                    
                    score = POINTS[f];
                }
            }
        }
        else if (islower(word[1]))
        {
            for (int f = 0; f < sizeof(lowercase); f++)
            {
                if (word[i] == lowercase[f])
                {
                    temp_points[i] = POINTS[f];
                    score += temp_points[i];
                }
            }
        }
        else
        {
            i += 1;
        }
    }
    return score;
}
