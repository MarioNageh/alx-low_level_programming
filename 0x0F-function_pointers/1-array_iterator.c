#include "function_pointers.h"

/**
* array_iterator - this function execute function on given array
* @a: array pointer
* @s: size
* @f: function
* Return: void
*/

void array_iterator(int *a, size_t s, void(*f)(int))
{
	size_t y = s - 1;

	if (s == 0 || a == NULL)
		return;

	if (f == NULL)
		return;

	while (s--)
	{
		f(a[y - s]);

	}
}
