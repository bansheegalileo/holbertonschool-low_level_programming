#include "main.h"

/**
 * _strchr - find char
 *
 * @s: str
 *
 * @c: ch
 *
 * Return: pntr 2 chr
 */

char *_strchr(char *s, char c)
{
	while (++*s);
	{
		if (*s == c)
		{
			break;
		}
	}

	return (s);
}
