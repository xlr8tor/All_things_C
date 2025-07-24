#include <stdio.h>

/**
 * Entry - main
 *
 * Copy input into output replacing all tabs, backspaces and backslashes with \t,\b,\\
 *
 * Return: 0
 */

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(c);
    }

    return (0);
}