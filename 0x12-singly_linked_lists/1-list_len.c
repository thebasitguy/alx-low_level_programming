#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 *
 * @h: name of the list
 *
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

