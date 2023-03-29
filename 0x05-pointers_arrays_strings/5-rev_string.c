#include "main.h"
#include <string.h>

/**
* rev_string - reverse the string
* @s: char pointer
* return: void
*/

void rev_string(char *s)
{
int l = 0;
int h = strlen(s) - 1;

while ( l <= h)
{
	char temp = *(s + l);
    *(s + l) = *(s + h);
    *(s + h) = temp;
    l++;
	h--;

}



}
