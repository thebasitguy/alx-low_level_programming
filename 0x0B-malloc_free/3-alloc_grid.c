#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **dim_array;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim_array = malloc(sizeof(int *) * height);

	if (dim_array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		dim_array[x] = malloc(sizeof(int) * width);

		if (dim_array[x] == NULL)
		{
			for (; x >= 0; x--)
				free(dim_array[x]);

			free(dim_array);

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dim_array[x][y] = 0;
	}

	return (dim_array);
}

