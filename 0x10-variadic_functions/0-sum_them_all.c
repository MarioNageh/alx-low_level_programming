#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Sum all args
* @n: number Of args
* @...: args
* Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
 	unsigned int x;
	
	va_list a;
	va_start(a,n);

	for (x = 0; x < n ; x++)
		{
			i += va_arg(a,int);

		}

	return (i);
}
