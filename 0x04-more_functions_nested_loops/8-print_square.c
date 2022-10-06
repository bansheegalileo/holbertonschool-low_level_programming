#include "main.h"

/**
 * print_square - square
 *
 * @size: squize
 *
 * Return: 0
*/

void print_square(int size)
{
	int l, w;

	for (l = 1; l <= size; ++l)
	{
		for (w = 1; w <= size; ++w)
			_putchar('#');
		_putchar('\n');
	}
}
