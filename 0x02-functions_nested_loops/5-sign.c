#include <limits.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
		return 1;
	}
	else if (n == 0)
	{
		printf("0\n");
		return 0;
	}
	else
	{
		printf("-\n");
		return -1;
	}
}

int main()
{
  int x = -5;
  int y = 0;
  int z = 10;

  print_sign(x);  /* prints '-' */
  print_sign(y);  /* prints '0' */
  print_sign(z);  /* prints '+' */

  return 0;
}
