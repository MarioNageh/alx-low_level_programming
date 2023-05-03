#include "lists.h"


/**
* delete_nodeint_at_index - get i nodes the i is base 0 index
*@h: pointer of poiter  of head of linked list
*@i: index of data
*Return: node
*/

int delete_nodeint_at_index(listint_t **h, unsigned int i)
{
	listint_t *tmp, *copy = *h;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (i == 0)
	{
		*h = (*h)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (i - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
