#include "main.h"

/**
* description: rot13 - rotate the string by 13 place
* @s: string pointer
* Return: char * for string
*/

char *rot13(char *s)
{
	char half1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	char half2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i = 0, j;

	while (s[i] != 0)
	{
		char c = s[i];

		for (j = 0; j < 52; j++)
		{
			if (c == half1[j])
			{
				s[i] = half2[j];
			}
		}
		i++;
	}
	return (s);
}
