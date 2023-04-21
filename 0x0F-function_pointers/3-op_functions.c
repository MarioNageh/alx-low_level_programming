#include "3-calc.h"

/**
* op_add - this function add a, ,b
* @a: ist int
* @b: sec int
* Return: sumtion of a,b
*/

int op_add(int a, int b)
{

	return (a + b);
}



/**
* op_sub - this function sub a, ,b
* @a: ist int
* @b: sec int
* Return: sub of a,b
*/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
* op_mul - this function * a, ,b
* @a: ist int
* @b: sec int
* Return: * of a,b
*/

int op_mul(int a, int b)
{

	return (a * b);
}


/**
* op_div - this function / a, ,b
* @a: ist int
* @b: sec int
* Return: / of a,b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a / b);
}



/**
* op_mod - this function % a, ,b
* @a: ist int
* @b: sec int
* Return: % of a,b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a % b);
}
