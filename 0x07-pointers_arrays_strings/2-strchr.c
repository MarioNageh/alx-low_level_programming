#include "main.h"

/**
 * _strchr - find char in string
 * @s: pointer to string
 * @c: character to search
 * Return: pointer to array
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return NULL;
}
