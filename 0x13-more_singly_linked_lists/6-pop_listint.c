#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - goodbye head node
 *
 * @head: ptr to head
 *
 * Return: 0 if empty otherwise head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int r;

	if (*head == NULL)
		return (0);

	a = *head;
	r = (*head)->n;
	*head = (*head)->next;

	free(a);

	return (r);
}
