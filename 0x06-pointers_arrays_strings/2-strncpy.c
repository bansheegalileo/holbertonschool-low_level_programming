#include "holberton.h"

/**
 * _strncpy - string cloning lab
 *
 * @dest: ch
 *
 * @src: ch
 *
 * @n: int
 *
 * Return:ch
 */

char *_strncpy(char *dest, char *src, int n)
{
	int q;

	while (q < n && *(src + q))
	{
		*(dest + q) = *(src + q);
		++q;
	}

	while (q < n)
	{
		*(dest + q) = '\0';
		++q;

	return (dest);
}
