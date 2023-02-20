#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns ptr to a newly alloc8d space in mem
 * with str copy given as param
 *
 * @str: string to copy
 *
 * Return: ptr to duped str, NULL if insuff mem
 */

char *_strdup(char *str)
{
	char *str_cp;
	int a, sz = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + sz))
		sz++;
	sz++;
	str_cp = malloc(sizeof(char) * sz);
	if (str_cp == NULL)
		return (NULL);
	a = 0;
	while (a < sz)
	{
		*(str_cp + a) = *(str + a);
		a++;
	}
	return (str_cp);
}