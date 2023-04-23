#include <stdio.h>
# include "main.h"

/**
 * converting binary to unsigned int
 * using bitwise and logical operators
*/

unsigned int binary_to_uint(constant char *b)

{
	unsigned int result = 0;
	if (b == NULL) {
		return 0;
	}
	for (int i = 0; b[i] != '\0'; i++) {
		if (b[i] == '0') {
			result = (result << 1) | 1;
		}
		else {
			return 0;
		}
	}
	return result:
}
