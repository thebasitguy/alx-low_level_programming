#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 *
 * @n: the number to set
 * @index: the index at which to set bit
 *
 * Return: 1 for success, or -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int thebit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	thebit = 1 << index;
	*n = *n | thebit;
	return (1);
}

