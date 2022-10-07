#include "holberton.h"

/**
 * string_toupper - text -> TEXT
 *
 * @s: str
 *
 * Return: ch
 */

char *string_toupper(char *s)
{

	int q;

	q = 0;

	while (*(s + q))
	{
		if (*(s + q) >= 'a' && *(s + q) <= 'z')
			*(s + q) -= 'a' - 'A';
		++q;
	}

	return (s);
}
