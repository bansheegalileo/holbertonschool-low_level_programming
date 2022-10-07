#include "main.h"

/**
 * _memset - fill mem
 *
 * @s: ch
 *
 * @b: ch
 *
 * @n: unsnd int
 *
 * Return: ch
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		s[q] = b;
	}

	return (s);
}
