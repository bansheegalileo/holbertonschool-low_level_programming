
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free my boy list_t
 *
 * @head: ptr to list
 */

void free_list(list_t *head)
{
	list_t *gargoxxthebloodwretcher;

	while (head)
	{
		gargoxxthebloodwretcher = head->next;
		free(head->str);
		free(head);
		head = gargoxxthebloodwretcher;
	}
}
