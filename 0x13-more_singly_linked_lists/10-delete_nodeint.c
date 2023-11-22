#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked
 * list at a certain index
 *
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node = *head;
	listint_t *node_to_delete = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!previous_node || !(previous_node->next))
			return (-1);

		previous_node = previous_node->next;
		i++;
	}

	node_to_delete = previous_node->next;
	previous_node->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}

