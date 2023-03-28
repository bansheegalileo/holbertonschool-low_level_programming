#include "lists.h"

/**
 * sum_dlistint - sum zaul dayda from list
 *
 * @head: head
 *
 * Return: sumb
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
