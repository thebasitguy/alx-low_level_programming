#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t linked list
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 *
 * Return: the nth node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *current_node;

	size = 0;
	if (head == NULL)
	return (NULL);

	current_node = head;
	while (current_node)
	{
	if (index == size)
	return (current_node);
	size++;
	current_node = current_node->next;
	}
	return (NULL);
}
