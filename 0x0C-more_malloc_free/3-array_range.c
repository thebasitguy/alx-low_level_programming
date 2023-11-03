#include <stdlib.h>
#include "main.h"

/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
*
* Return: pointer to the new array
*/

int *array_range(int min, int max)
{
	int *ppp;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ppp = malloc(sizeof(int) * size);

	if (ppp == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ppp[i] = min++;

	return (ppp);
}

