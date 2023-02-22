#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 *
 */

void print_alphabet_x10(void)

{

	int n, p;

	p = 0;

while (p < 10)

	{

	for (n = 'a'; n <= 'z'; n++)

	{

	_putchar(n);

	}

	p++;

	_putchar('\n');

	}

}
