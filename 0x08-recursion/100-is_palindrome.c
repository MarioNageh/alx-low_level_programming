#include "main.h"


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
	int str_len = 0;

	while (*(s + str_len) != '\0')
	{
		str_len++;
	}

	return (p(s, 0, str_len - 1));
}
