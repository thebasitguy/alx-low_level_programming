#include "lists.h"

/**
 * dlistint_len - prints the number of elements in
 * a doubly linked list
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
