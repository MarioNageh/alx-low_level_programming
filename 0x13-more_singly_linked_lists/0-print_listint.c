#include "lists.h"


/**
* print_listint - print linked list
*@h: pointer of head of linked list
*Return: Size Of Linked List
*/

size_t print_listint(const listint_t *h)
{
	size_t linked_list_size = 0;
	listint_t *head = h;

	while (head != NULL)
	{
		linked_list_size++;
		head = head->next;
	}


	return (linked_list_size);

}
