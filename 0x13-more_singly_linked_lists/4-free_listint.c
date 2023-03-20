#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees list
 *
 * @head: ptr to head of list 2 be freed
 */

void free_listint(listint_t *head)
{
	listint_t *gargoxxthebloodwretcher;

	while (head)
	{
		gargoxxthebloodwretcher = head->next;
		free(head);
		head = gargoxxthebloodwretcher;
	}
}
