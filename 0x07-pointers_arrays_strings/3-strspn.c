#include "main.h"

/**
 * _strspn - find char in string
 * @s: pointer to string
 * @c: character to search
 * Return: Returns the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *c)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(c + i); i++)
		{
			if (*(s + j) == *(c + i))
				break;
		}
		if (*(c + i) == '\0')
			break;
	}
	return (j);
}
