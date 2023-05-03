#include "lists.h"


/**
* listint_len - print linked list
*@h: pointer of head of linked list
*Return: Size Of Linked List
*/

size_t listint_len(const listint_t *h)
{
	size_t linked_list_size = 0;
	const listint_t *head = h;

	while (head != NULL)
	{
		linked_list_size++;
		head = head->next;
	}

	return (linked_list_size);

}
