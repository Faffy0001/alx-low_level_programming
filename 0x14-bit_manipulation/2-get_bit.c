#include <stdio.h>

#include "main.h"

/**
 * a function that returns the value of a bit at a given index
 * Prototype: int get_bit(unsigned long int n, unsigned int index)
 * Returns: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }
    return (n >> index) & 1;
}