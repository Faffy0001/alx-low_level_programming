#include "main.h"

/**
 * clear_bit - clear bit to 0 at a given index
 * @n: number
 * @index: index within a bianry number
 * Return: 1 if success, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if(index >= sizeof(unsigned long int) * 8)
		return -1;

	*n &= ~(1UL << index);

	return 1;
}
