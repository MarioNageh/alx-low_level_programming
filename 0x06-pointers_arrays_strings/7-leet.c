#include "main.h"

/**
* Description: leet - Encrypt The String
* @str: string pointer
* Return: char * to result
*/

char *leet(char *str)
{
	char *p = str;

	while (*p)
	{
		*p += (*p == 'a' || *p == 'A') * ('4' - 'a');
		*p += (*p == 'e' || *p == 'E') * ('3' - 'e');
		*p += (*p == 'o' || *p == 'O') * ('0' - 'o');
		*p += (*p == 't' || *p == 'T') * ('7' - 't');
		*p += (*p == 'l' || *p == 'L') * ('1' - 'l');
		p++;
	}
	return (str);
}
