#include "main.h"

/**
 * Return the value of the bit at the given index
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index >= 63)
	{
		return (n >> index) & 1;
	}
	else
	{
		return -1;
	}
}
