#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints el-lemons fron @x linked list :3
 *
 * @h: the head! yippee!
 *
 * Return: numbr-o-nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t noes = 0;

	while (h)
	{
		noes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (noes);
}
