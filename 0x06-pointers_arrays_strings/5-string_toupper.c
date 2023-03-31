#include "main.h"
#include <stdio.h>

/**
* Description: string_toupper - make string to upper
* @s: string
* Return: char *
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
