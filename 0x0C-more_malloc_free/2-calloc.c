#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for an array of nmemb elements of
* size bytes each and returns a pointer to the allocated memory
*
* @nmemb: memory allocated for array
* @size: allocated size of elements in bytes
*
* Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(nmemb * size);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < (nmemb * size); j++)
		i[j] = 0;

	return (i);
}

