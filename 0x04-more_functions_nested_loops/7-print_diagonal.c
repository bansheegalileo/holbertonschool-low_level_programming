#include "main.h"

/**
 * print_diagonal - diag
 *
 * @n:int
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int p, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; ++p)
		{
			for (d = 1; d <= p; ++d)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
