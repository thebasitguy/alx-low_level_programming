#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array
  *                 of integers using linear search.
  *
  * @array: Pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  *
  * Return: -1 if the value is not present or the array is NULL.
  *         Else, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
