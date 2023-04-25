#include "main.h"

/**
 * Function that converts a binary number to an unsigned int
 * @b: The binary number of the string
 * Return:the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int connum = 0;

	while (*b != '\0')
	{
		if (*b == '0')
		{
			connum <<= 1; /*shift left by one position*/
		}
		else if (*b == '1')
		{
			connum <<= 1; /*shift left by one position*/
			connum |= 1; /*Set the least significant bit to 1*/
		}
		else
		{
			return 0;
		}
		b++;
	}
	return connum;
}
