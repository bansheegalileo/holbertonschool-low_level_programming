#include "holberton.h"

/**
 * reverse_array - yarra
 *
 * @a: arr
 *
 * @n: int
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; (c < (n - 1) / 2); ++c)
	{
		b = a[c];
		a[c] = a[n - 1 - c];
		a[n - 1 - c] = b;
	}
}
