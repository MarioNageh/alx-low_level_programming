#include "main.h"


/**
* Description: prime - check if prime number
* @n: the number
* @i: counter form [1 , n]
* Return: 0 , 1
*/

int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (i <= 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (prime(n, i - 1));
}




/**
* Description: is_prime_number - to check if it prime numbe or not
* @n: int
* Return: 1 is prime , 0 otherwise
*/

int is_prime_number(int n)
{
	return (prime(n, n - 1));
}
