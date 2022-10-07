#include "main.h"

/**
 * _strspn - pfx sbstr lngth
 *
 * @s: str
 *
 * @accept: str
 *
 * Return: unsgn int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	int b;

	a = 0;

	while (*s)
	{
		for (b = 0; accept[b]; ++b)
		{
			if (*s == accept[b])
			{
				++a;
				break;
			}

			elif (accept[b + 1] == '\0')
			{
				return (a);
			}
		}

		++s;
	}

	return (a);
}
