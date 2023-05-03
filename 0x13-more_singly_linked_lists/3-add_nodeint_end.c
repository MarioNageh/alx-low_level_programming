#include "lists.h"


/**
* add_nodeint_end - add node to begin of list
*@head: pointer of poiter  of head of linked list
*@n: the data
*Return: Size Of Linked List
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
