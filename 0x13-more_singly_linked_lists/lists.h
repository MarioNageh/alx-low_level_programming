#ifndef LINKEDLIST_LISTS_H
#define LINKEDLIST_LISTS_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct listint_s - singly linked list
 * @n: int - data
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;

}  listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);


#endif