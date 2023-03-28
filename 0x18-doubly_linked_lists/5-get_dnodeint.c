#include "lists.h"

/**
 * get_dnodeint_at_index - locates a node in the list
 *
 * @head: headoflist
 *
 * @index: node to loacate
 *
 * Return: null if nonexistant, location udderwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
