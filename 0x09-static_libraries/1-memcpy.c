#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: source parameter
  *
  * @dest: destination parameter
  *
  * @n: function parameter
  *
  * Return: Copied memory
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
