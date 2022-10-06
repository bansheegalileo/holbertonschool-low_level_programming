#include "main.h"

/**
 * times_table -  prints 9x table
 *
 * r = row, b = bar, n = numbrez
 *
 * Return: table
 */

void times_table(void)
{
	int r;

	int b;

	int n;

	for (r = 0; r <= 9;)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (b = 1; b <= 9;)
		{
			n = (r * b);
			if ((n / 10) > 0)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((n % 10) + '0');

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			b++
		}

		r++;

		_putchar('\n');
	}

}
