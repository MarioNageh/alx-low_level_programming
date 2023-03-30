#include "main.h"
#include <stdio.h>

/**
* Description: string_toupper - make string to upper
* @s: string
* Return: char *
*/

char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s == '\0')
			break;

		if (*s >= 'a' && *s <= 'z')
		{
			*s = 'A' + (*s - 'a');
		}
		s++;
	}
	return (s);
}
