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
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; ++a)
		{
			if (*s == accept[a])
			{
				return (s);
			}

		}

		++s;
	}

	return ('\0');
}
