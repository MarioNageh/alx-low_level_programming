#include "main.h"
/**
* Description: factorial - Return String Length
* @s: int
* Return: Integer
*/

int factorial(int s)
{
	if (s == 1)
		return (1);

	if (s <= 0)
		return (-1);

	return (s * factorial(s - 1));
}
