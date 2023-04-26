#include "main.h"

/**
 * _strchr - find char in string
 * @s: pointer to string
 * @c: character to search
 * Return: pointer to array
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
