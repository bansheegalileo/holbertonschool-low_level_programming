#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - 2diagsums
 *
 * @a: int
 *
 * @size: int size
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int q, s1 = 0, s2 = 0;

	for (q = 0; q < size; ++q)
	{
		s1 += a[q];
		a += size;
	}

	a -= size;

	for (q = 0; q < size; ++q)
	{
		s2 += a[q];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
