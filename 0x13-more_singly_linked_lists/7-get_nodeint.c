#include "lists.h"


/**
* get_nodeint_at_index - get i nodes the i is base 0 index
*@head: pointer of poiter  of head of linked list
*@i: index of data
*Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int i)
{
	int c = 0;

	if (!head || i <= 0)
		return (NULL);

	while (head)
	{
		if (c == i)
			return (head);
		c++;
		head = head->next;
	}
	return (NULL);
}
