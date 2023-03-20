#include "lists.h"

/**
 * list_len - number of elems in linked list
 *
 * @h: list_t
 *
 * Return: elems in list
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
