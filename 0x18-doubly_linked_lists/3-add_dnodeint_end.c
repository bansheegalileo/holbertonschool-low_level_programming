#include "lists.h"

/**
 * add_dnodeint_end - new noodle to the end
 *
 * @head: bow and arrow aimed at the apple on the head
 *
 * @n: The integer for the new node to contain.
 *
 * Return: null on fail, new addy if not
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
