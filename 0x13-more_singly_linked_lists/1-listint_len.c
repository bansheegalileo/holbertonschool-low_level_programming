#include "lists.h"
#include <stdio.h>

/**
 * listint_len - num of elems in list
 *
 * @h: ptr to head
 *
 * Return: num of elems
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
