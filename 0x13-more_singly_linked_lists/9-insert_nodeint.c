#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 *
 * @head: ptr to head
 *
 * @idx: index of list
 *
 * @n: int for new node
 *
 * Return: new node address or NULL on fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cp = *head;
	unsigned int nd;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = cp;
		*head = new;
		return (new);
	}

	for (nd = 0; nd < (idx - 1); nd++)
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);

		cp = cp->next;
	}

	new->next = cp->next;
	cp->next = new;

	return (new);
}
