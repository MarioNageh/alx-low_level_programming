#include "lists.h"


/**
* insert_nodeint_at_index - get i nodes the i is base 0 index
*@h: pointer of poiter  of head of linked list
*@idx: index of data
*@n: index of data
*Return: node
*/

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	listint_t *new, *copy = *h;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*h = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
