#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string parameter input
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int half = len / 2;

	if (len % 2 == 1)
	{
		half = (len - 1) / 2;
	}
	for (i = half; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
