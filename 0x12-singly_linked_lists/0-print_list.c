#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 * Return: The amountof nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		!(h->str == k) ? printf("[%d] %s\n", h->len, h->str) : printf("[0] (nil)\n");
		nodes++;
		h = h->next;
	}
	return (nodes);
}
