#include <stdio.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen- return the string legnth
 * @s: string pointer
 * Return: the string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * isdigit - check the char is number or not
 * @c: char
 * Return: 1 is digit , 0 is not digit
 */
int isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
* description: main - Program add numbers
* @argc: The Args Count
* @argv: The Array Or Args
* Return: 0
*/

int main(int argc, char *argv[])
{

	int i, len, counter = 0, j;


	for (i = 1; i < argc; ++i)
	{
		j = 0;
		len = _strlen(argv[i]);

		while (j < len)
		{
			if (!isdigit(argv[i][j]))
			{
				puts("Error");
				return (-1);
			}
			j++;

		}

		counter += atoi(argv[i]);
	}
	printf("%d\n", counter);
	return (0);
}
