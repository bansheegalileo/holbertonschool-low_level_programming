#include <stdlib.h>

/**
 * _calloc - alloc8s mem 4 arr and sets to 0
 *
 * @nmemb: num of elems to alloc8
 *
 * @size: bytesize of each elem
 *
 * Return: ptr to alloc8d mem or NULL on fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		*((char *)ptr + a) = 0;
	return (ptr);
}
