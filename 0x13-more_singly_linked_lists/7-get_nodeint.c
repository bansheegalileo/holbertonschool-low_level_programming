#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - locates node of list
 *
 * @head: ptr to head
v*
 * @index: index of node to locate
 *
 * Return: node, if nonexistant NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nd;

	for (nd = 0; nd < index; nd++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
