#include "variadic_functions.h"

/**
* print_all - print all args
* @f: format array
* @ ...: list of strings
* Return: void
*/

void print_all(const char * const f, ...)
{
	va_list a;
	const char *p;
	char *s;
	int i;
	double z;
	char x;

	va_start(a, f);
	for (p = f; *p != '\0'; p++)
	{
		if (*p == 'c')
		{
			x = (char) va_arg(a, int);
			printf("%c", x);
		}
		else if (*p == 'i')
		{
			i = va_arg(a, int);
			printf("%d", i);
		}
		else if (*p == 'f')
		{
			z = va_arg(a, double);
			printf("%f", z);
		}
		else if (*p == 's')
		{
			s = va_arg(a, char*);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
		}

	if (*(p + 1) != '\0')
		printf(", ");

	}
	printf("\n");

}
