#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1;
    int i;

    for (i = sizeof(n) * 8 - 1; i >= 0; i--)
    {
        if (n & (mask << i))
            _putchar('1');
        else
            _putchar('0');
    }
}
