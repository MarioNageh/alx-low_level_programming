#include "main.h"

/**
* Description: reverse_array - reverse Array Content
* @a: the array
* @n: size of array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int l = 0;
	int h = n - 1;
	int temp;

	while (l < h)
	{
		temp = a[h];
		a[h] = a[l];
		a[l] = temp;
		l++;
		h--;
	}

}
