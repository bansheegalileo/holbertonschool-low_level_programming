#include "main.h"

/**
 * _strpbrk -  find this bites
 * 
 * @s: str
 *
 * @accept: str
 *
 * Return:ch
 */

char *_strpbrk(char *s, char *accept)
{
	int q, b;

	q = 0;
	while (s[q] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[q] == accept[b])
				return (s + q);
			++b;
		}
		++q;
	}
	return ('\0');
}
