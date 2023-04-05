#include "main.h"
/**
* Description: _strlen_recursion - Return String Length
* @s: Pointer To String
* Return: Integer
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
