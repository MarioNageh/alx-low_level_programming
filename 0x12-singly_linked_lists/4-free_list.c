#include "lists.h"

/**
 * free_list - frees a list elements
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *temp, *temp2;

	if (!head)
		return;

	temp = head;
	while (temp != 0)
	{
		temp2 = temp->next;
		free(temp->str);
		free(temp);
		temp = temp2;
	}
}
