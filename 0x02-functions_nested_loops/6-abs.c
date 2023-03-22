#include "main.h"

/**
* Description: _abs - computes the absolute value of an integer.
* @c: integer
* Return: positive value
*/

int _abs(int c)
{
	if (c < 0)
	{
		return c*-1;
	}
	return c;
}
