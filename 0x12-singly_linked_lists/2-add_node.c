#include <stdio.h>
#include "lists.h"

/**
 * add_node - add new node
 * @head: pointer to first element
 * @str: the data
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	int len_of_data;

	new_element = malloc(sizeof(list_t));

	if (str == NULL)
	{
		free(new_element);
		return (NULL);
	}



	for (len_of_data = 0; str[len_of_data];)
		len_of_data++;

	new_element->str = strdup(str);
	new_element->len = len_of_data;
	new_element->next = *head;

	*head = new_element;
	return (new_element);
}
