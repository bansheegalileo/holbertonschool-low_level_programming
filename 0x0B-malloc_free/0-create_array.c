#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates arry of chars, inits with a specific char
 *
 * @size: arry size
 *
 * @c: char to init with
 *
 * Return: pointer to arry, NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int a;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		arr[a] = c;
	return (arr);
}
