#include <stdio.h>

/**
 * Entry - main
 *
 * Count blanks, tabs and newline characters
 *
 *  Return: 0
 */

int main(void)
{
    int c, count;

    count = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == ' ' || c == '\t')
            ++count;
    }

    printf("Number of spaces: %d\n", count);
}