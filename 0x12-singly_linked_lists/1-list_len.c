#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements
 * @h: pointer to linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
