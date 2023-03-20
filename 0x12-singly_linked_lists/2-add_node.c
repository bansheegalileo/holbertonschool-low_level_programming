#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - new node to beginning
 *
 * @head: head of list ptr
 *
 * @str: string to add
 *
 * Return: address of elem, Null on fail
 */

list_t *add_node(list_t **head, const char *str)
{
	char *argaxxdestroyerofworldsconquererofdeepspace;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	argaxxdestroyerofworldsconquererofdeepspace = strdup(str);
	if (argaxxdestroyerofworldsconquererofdeepspace == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = argaxxdestroyerofworldsconquererofdeepspace;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
