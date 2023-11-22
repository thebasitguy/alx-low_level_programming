#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodeCount = 0;
	int addressDiff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		addressDiff = *h - (*h)->next;
		if (addressDiff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			nodeCount++;
		}
		else
		{
			free(*h);
			*h = NULL;
			nodeCount++;
			break;
		}
	}

	*h = NULL;

	return (nodeCount);
}

