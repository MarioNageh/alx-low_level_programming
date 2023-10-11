#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
*/

int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int j = size - 1;
	int mid, k;

	if (array == NULL)
		return (-1);
	
	while (i <= j)
	{
		mid = (i + j) / 2;
		for (k=i; k <= j; k++)
		{
			if(k == i)
				printf("%d", array[k]);
			else
				printf(", %d", array[k]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			i = mid + 1;
		else
			j = mid - 1;
	}
	return (-1);
}