#include "main.h"

/**
* Description: _islower - check if character lower or upper
* @c: single character
* Return: 1 is lowercase , 0 is upper
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
