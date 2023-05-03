#include "lists.h"


/**
* sum_listint - print linked list
*@h: pointer of head of linked list
*Return: Size Of Linked List
*/

int sum_listint(const listint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);

}
