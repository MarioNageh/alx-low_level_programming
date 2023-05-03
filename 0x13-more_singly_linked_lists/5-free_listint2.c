#include "lists.h"


/**
* free_listint2 - print linked list
*@h: pointer of head of linked list
*Return: Void
*/

void free_listint2(listint_t **h)
{
	listint_t *temp;

	if (h == NULL)
		return;

	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
	}

}
