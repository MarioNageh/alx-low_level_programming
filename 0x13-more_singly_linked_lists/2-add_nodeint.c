#include "lists.h"


/**
* add_nodeint - add node to begin of list
*@head: pointer of poiter  of head of linked list
*@n: the data
*Return: Size Of Linked List
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (!new)
		return (NULL);


	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
