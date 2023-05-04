#include "main.h"


/**
* strlen_m - count the string length
* @c: pointer to string
* Return: the string length
*/

int strlen_m(char *c)
{
	int count = 0;

	while (*c++)
		count++;

	return (count);
}
