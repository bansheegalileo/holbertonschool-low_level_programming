#include <stdlib.h>

/**
 * malloc_checked - alloc8s mem with malloc
 *
 * @b: size of block to alloc8
 *
 * Return: ptr to the alloc8d mem, if malloc fails 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
