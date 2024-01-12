#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of list
 * @index: index of new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	dlistint_t *previous_node;
	unsigned int i;

	current_node = *head;

	if (current_node != NULL)
		while (current_node->prev != NULL)
			current_node = current_node->prev;

	i = 0;

	while (current_node != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = current_node->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				previous_node->next = current_node->next;

				if (current_node->next != NULL)
					current_node->next->prev = previous_node;
			}

			free(current_node);
			return (1);
		}
		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}

	return (-1);
}
