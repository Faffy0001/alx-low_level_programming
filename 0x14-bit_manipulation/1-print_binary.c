#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n) {
    int i;
    int num_bits = sizeof(unsigned long int) * 8; // get the number of bits in an unsigned long int

    for (i = num_bits - 1; i >= 0; i--) { // loop through each bit in the number from left to right
        if (n >> i & 1) { // if the current bit is a 1
            putchar('1');
        } else { // if the current bit is a 0
            putchar('0');
        }
    }
}

