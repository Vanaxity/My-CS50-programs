#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height;
do {
     height = get_int("Enter the height of the pyramid.....\n");
}
while(height < 1 || height > 100 );

for(int no_hash = 0; no_hash < height; no_hash++)
{
    int total_single_dots = height - no_hash;

    for (int dot_single_line = 0; dot_single_line < total_single_dots; dot_single_line++)
    {
        printf(" ");
    }

    for( int single_line = 0; single_line <= no_hash; single_line++)
    {
        printf("#");
    }
    printf("  ");
        for( int single_line = 0; single_line <= no_hash; single_line++)
    {
        printf("#");
    }

    printf("\n");


}
