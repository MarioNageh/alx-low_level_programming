#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add new node to the end
 * @head: pointer to first element
 * @str: the data
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count;
	list_t *ptr, *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (0);

	temp->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	temp->len = count;
	temp->next = NULL;
	ptr = *head;

	if (ptr == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)

			ptr = ptr->next;
		ptr->next = temp;
	}

	return (*head);
}
