#include "main.h"

/**
 * Print the binary presentation of a number. 
 * @n: unsigned int 
 * Return: binary
 */

void print_binary(unsigned long int n)

{
	if (n > 1) /*right shift bitwise operator*/
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
