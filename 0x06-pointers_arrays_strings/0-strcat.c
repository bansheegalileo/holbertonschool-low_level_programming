#include "holberton.h"

/**
 * _strcat - concats
 * @dest:ch
 *
 * @src:ch
 *
 * Return:ch
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
