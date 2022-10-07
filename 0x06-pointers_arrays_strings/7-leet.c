#include "holberton.h"

/**
 * leet - 707411y r4dic4l
 *
 * @s: str
 *
 * Return: s adr
 */

char *leet(char *s)
{
	int a, b;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (a = 0; *(s + a); ++a)
	{
		for (b = 0; b <= 9; ++b)
		{
			if (c[b] == s[a])
				s[a] = d[b];
		}
	}

	return (s);
}
