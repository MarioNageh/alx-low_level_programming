#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all linked list elemnts
 * @h: pointer to linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			puts("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
