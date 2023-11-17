#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: pointer to the first node of the list to free
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

