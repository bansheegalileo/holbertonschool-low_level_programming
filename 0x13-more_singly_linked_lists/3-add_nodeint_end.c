#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node to end of list
 *
 * @head: ptr  to head
 *
 * @n: int for new node
 *
 * Return: address of elem, Null on fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
