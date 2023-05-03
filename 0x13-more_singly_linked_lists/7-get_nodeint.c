#include "lists.h"


/**
* get_nodeint_at_index - get i nodes the i is base 0 index
*@head: pointer of poiter  of head of linked list
*@i: index of data
*Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int i)
{
	unsigned int node;

	for (node = 0; node < i; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
