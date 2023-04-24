#include "main.h"

/**
 * set_bit - set bit to 1 at index
 * @n: number
 * @index: index within binary number
 * return: 1 if success, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }

    *n |= (1ul << index);

    return 1;
}
