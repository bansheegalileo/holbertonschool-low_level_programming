#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node to list head
 *
 * @head: ptr to head
 *
 * @n: int 4 new node
 *
 * Return: address of elem, Null on fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
