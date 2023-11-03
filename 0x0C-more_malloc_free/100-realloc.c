#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: pointer to the memory previously allocated
* @old_size:is the size, in bytes, of the allocated space for ptr
* @new_size: the new size, in bytes of the new memory block
*
* Return: pointer allocate new size memory, or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ppp;
	unsigned int i, j = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		ppp = malloc(new_size);
		return (ppp);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	ppp = malloc(new_size);

	if (ppp == NULL)
		return (NULL);

	if (new_size > old_size)
		j = old_size;

	for (i = 0; i < j; i++)
		ppp[i] = oldp[i];

	free(ptr);

	return (ppp);
}

