#include "lists.h"

/**
 * print_dlistint_backward- print elems of list backward
 * @h: head
 * Return: node count
*/

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t cnt;

	cnt = 0;
	if (!h)
		return (cnt);

	while (h->next)
	{
		h = h->next;
		cnt++;
	}

	cnt++;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->prev;
	}

	return (cnt);
}
