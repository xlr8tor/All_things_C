#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints out a fahrenheit to celsius table
 *
 * Return: 0
 */

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f \t %6.1f\n", fahr, celsius);
        fahr += step;
    }
}