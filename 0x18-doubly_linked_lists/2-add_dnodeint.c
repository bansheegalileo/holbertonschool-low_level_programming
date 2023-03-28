#include "lists.h"

/**
 * add_dnodeint - new note to head of der doubly linked lisht
 *
 * @head: pointer to head!!!!!!!!!!!!!!!!!!
 *
 * @n: the integer political prisoner locked in the node
 *
 * Return: null on fail, addy of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
