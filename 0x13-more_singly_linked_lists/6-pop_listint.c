#include "lists.h"


/**
* pop_listint - print linked list
*@h: pointer of head of linked list
*Return: Void
*/

int  pop_listint(listint_t **h)
{
	listint_t *head;
	int data;

	if (*h == NULL)
		return (0);

	head = *h;
	data = head->n;

	*h = (*h)->next;

	free(head);
	return (data);
}
