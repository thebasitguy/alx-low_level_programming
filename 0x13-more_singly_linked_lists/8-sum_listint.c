#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: first node in the linked list
 *
 * Return: the sum or 0 if empty list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempNode = head;

	while (tempNode)
	{
		sum += tempNode->n;
		tempNode = tempNode->next;
	}

	return (sum);
}

