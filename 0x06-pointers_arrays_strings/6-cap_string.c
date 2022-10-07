#include "holberton.h"

/**
 * cap_string - ALL WORDS
 * 
 * @s: str
 *
 * Return: saddress
 */

char *cap_string(char *s)
{
	int b = 0, c;

	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + b))
	{
		if (*(s + b) >= 'a' && *(s + b) <= 'z')
		{
			if (b == 0)
				*(s + b) -= 'a' - 'A';

			else
			{
				for (c = 0; c <= 12; ++c)
				{
					if (a[c] == *(s + b - 1))
						*(s + b) -= 'a' - 'A';
				}
			}
		}

		++b;
	}

	return (s);
}
