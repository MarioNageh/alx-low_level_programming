#include "function_pointers.h"

/**
* int_index - search in array using function
* @a: array
* @s: size of array
* @f: function to serch
* Return: index of element , 0 not found
*/

int int_index(int *a, int s, int(*f)(int))
{
	int k = s - 1;

	if (f == NULL || a == NULL || s == 0)
		return (-1);


	while (s--)
	{
		if (f(a[k - s]))
			return (k - s);

	}
	return (-1);
}
