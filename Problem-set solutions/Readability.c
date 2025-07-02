#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void){

    string text = get_string("Enter your text here:  ");

    //To get the length of the text
    int length = strlen(text);
    int letters = 0;
    int words = 0;
    int sentences = 0;

    //Loop for counting
    for(int i = 0; i < length; i++)
    {
        char a = text[i];
        if(isalpha(a) !=0)
        {
            letters ++;
        }

        if (a == ' ' )
        {
            words++;
        }

        if ( a == '.' || a == '?' || a == '!' )
        {
            sentences++;
        }

    }
    // to account for the last word
    words = words + 1;


float L = ((float)letters / (float)words) *100;
float S = ((float)sentences / (float)words) *100;
float subindex = 0.0588 * L - 0.296 * S - 15.8;
int index = round(subindex);

if (index > 16)
{
    printf("Above grade 16!");
}

else if (index < 1)
{
    printf("Lower than grade 1!");
}

else
{
printf("grade %i\n", index);

}
}

