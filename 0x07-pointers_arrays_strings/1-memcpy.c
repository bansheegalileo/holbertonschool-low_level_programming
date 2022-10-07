#include "main.h"

/**
 * _memcpy - cp mem area
 *
 * @dest: ch
 *
 * @src: ch
 *
 * @n: int
 *
 * Return:ch ptr
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; ++q)
	{
		dest[q] = src[q];
	}

	return (dest);
}
