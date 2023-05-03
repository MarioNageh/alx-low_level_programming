#include "lists.h"


/**
* free_listint - print linked list
*@h: pointer of head of linked list
*Return: Void
*/

void free_listint(listint_t *h)
{
	listint_t *temp;

	while (h != NULL)
	{
		temp = h;
		h = h->next;
		free(temp);
	}

}
