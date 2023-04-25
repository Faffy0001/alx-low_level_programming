#include "main.h"

/**
 * Return the value of the bit at the given index
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index >= sixeof(unsigned long) * 8)
	{
		return -1;
	}
	
	int bin = n >> /*right shift bitwise operator*/
	int bit = bin & 1;

	return bit;
}
			 
