#include "main.h"

/**
 * Print the binary presentation of a number
 * @n: unsigned int
 * Return:0
 */


void print_binary(unsigned long int n)
{
	int 1;

	for (i = (sizeof(unsigned long int) * 8) -1; 1 >= 0; i--)
	{
		if (n & (1ul << i))
			_putchar('1');
		else
			_putchar('0')
	}
}
