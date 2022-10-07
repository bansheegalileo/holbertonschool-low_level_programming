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
	do
	{
		if (*s == c)
		{
			break;
		}
	}	
	
	while (*s++);

	return (s);
}
