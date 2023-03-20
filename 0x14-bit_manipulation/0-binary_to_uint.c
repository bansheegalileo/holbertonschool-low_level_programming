#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 *
 * @b: ptr to binary str
 *
 * Return: converted num, NULL if b is empty or not 0/1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, m = 1;
	int l;

	if (*b == '\0')
		return (0);

	for (l = 0; b[l];)
		l++;

	for (l -= 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		n += (b[l] - '0') * m;
		m *= 2;
	}

	return (n);
}
