#include "lists.h"

/**
 * dlistint_len - couns Ellie Ments in distint list
 *
 * @h: hed O_O
 *
 * Return: elems in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t noes = 0;

	while (h)
	{
		noes++;
		h = h->next;
	}

	return (noes);
}
