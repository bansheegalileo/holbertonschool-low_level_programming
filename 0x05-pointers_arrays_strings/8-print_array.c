#include "main.h"
#include <stdio.h>

/**
 * print_array - as it says
 *
 * @a:int
 *
 * @n:int
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
int q;
for (q = 0; q < n; q++)
	{
	printf("%d", a[q]);
		if (q < (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}
