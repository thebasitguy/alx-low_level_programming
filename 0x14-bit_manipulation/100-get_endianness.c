#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}

