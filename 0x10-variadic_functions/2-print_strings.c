#include "variadic_functions.h"



void print_string(const char *s);

/**
* print_strings - print numbers with separtor
* @s: char pointer to string separtor
* @n: number of integer
* @...: args
* Return: void
*/

void print_strings(const char *s, const unsigned int n, ...)
{
	char *i = 0;
	unsigned int x;
	va_list a;

	va_start(a, n);


	for (x = 0; x < n; x++)
	{
		i = va_arg(a, char*);

		if (i != NULL)
			printf("%s", i);
		else
			printf("(nil)");
		
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

	while (*s != '\0')
	{
		printf("%c", *s);
		s++;
	}
}
