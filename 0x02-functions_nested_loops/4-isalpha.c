#include "main.h"

/**
* Description: _isalpha - check if c is charater
* @c: int character
* Return: 1 if lowercase , uppercase - 0 otherwise
*/

int _isalpha(int c)
{
	if (((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z')))
		return (1);
	return (0);
}
