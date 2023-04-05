#include "main.h"


/**
* Description: sqt - calculate the sqare root of string
* @n: the number
* @i: counter form [1 , n]
* Return: sqt of n
*/

int sqt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);

	return (sqt(n, i + 1));
}




/**
* Description: _sqrt_recursion - Return squre root
* @n: int
* Return: Integer
*/

int _sqrt_recursion(int n)
{
	return (sqt(n, 1));
}
