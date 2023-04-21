#include "variadic_functions.h"



void print_string(const char *s);

/**
* print_numbers - print numbers with separtor
* @s: char pointer to string separtor
* @n: number of integer
* @...: args
* Return: void
*/

void print_numbers(const char *s, const unsigned int n, ...)
{
	int i = 0;
	unsigned int x;
	va_list a;

	va_start(a, n);


	for (x = 0; x < n; x++)
	{
		i = va_arg(a, int);
		printf("%d", i);
		if (s != NULL && x != n - 1)
			print_string(s);

	}

	printf("\n");
}



/**
* print_string - to print string using printf
* @s: pointer to strin
* Return: void
*/

void print_string(const char *s)
{

	const char *p = s;

	while (*s != '\0')
	{
		printf("%c", *s);
		s++;
	}
	s = p;
}
