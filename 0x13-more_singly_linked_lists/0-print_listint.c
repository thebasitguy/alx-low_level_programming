#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: the linked list to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t countNode = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		countNode++;
		h = h->next;
	}

	return (countNode);
}

