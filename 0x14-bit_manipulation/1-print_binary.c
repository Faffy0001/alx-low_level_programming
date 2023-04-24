#include <stdio.h>

void print_binary(unsigned long int n) {
    unsigned long int bit = (unsigned long int)1 << (sizeof(unsigned long int) * 8 - 1); // set bit to the leftmost bit of the number
    
    while (bit > 0) { // loop through each bit in the number
        if (n & bit) { // if the current bit is a 1
            putchar('1');
        } else { // if the current bit is a 0
            putchar('0');
        }
        bit >>= 1; // shift the bit one bit to the right
    }
}
