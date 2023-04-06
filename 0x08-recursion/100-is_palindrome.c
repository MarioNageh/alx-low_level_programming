#include "main.h"


/**
* len - return string length
* @s: string pointer
* Return: String Length
*/

int len(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + len(s + 1));
}


/**
* Description: p - check if string is palindrome
* @s: poitner to string
* @l: low pointer to string
* @h: hight pointer to string
* Return: 0 , 1
*/

int p(char *s, int l, int h)
{
	if (l >= h)
		return (1);
	else if (s[l] != s[h])
		return (0);
	return (p(s, l + 1, h - 1));
}

/**
* Description: is_palindrome - to check if string is palindrome
* @s: string pointer
* Return: 1 is palindrome , 0 otherwise
*/

int is_palindrome(char *s)
{
	return (p(s, 0, len(s) - 1));
}
