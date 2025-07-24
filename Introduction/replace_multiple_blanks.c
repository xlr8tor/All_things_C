#include <stdio.h>

/**
 * Entry - main
 *
 * Replace multiple blanks with a single blank
 *
 * Returns: 0
 */

int main(void)
{

    int c;
    int last_c = '\0';

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || last_c != ' ')
        {
            putchar(c);
        }

        last_c = c;
    }
}