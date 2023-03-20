#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees list
*
 * @head: ptr to head
 *
 * Description: head to null
 */

void free_listint2(listint_t **head)
{
	listint_t *gargoxxthebloodwretcher;

	if (head == NULL)
		return;

	while (*head)
	{
		gargoxxthebloodwretcher = (*head)->next;
		free(*head);
		*head = gargoxxthebloodwretcher;
	}

	head = NULL;
}
