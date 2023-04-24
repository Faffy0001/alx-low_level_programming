#include <stdio.h>

#include "main.h"

/**
 * a function that returns the value of a bit at a given index
 * Prototype: int get_bit(unsigned long int n, unsigned int index)
 * Returns: the value of the bit at index index or -1 if an error occured
*/

void print_binary(unsigned long int n) {
    if (n > 1) {
        print_binary(n / 2);
    }
    putchar('0' + (n % 2));
}
