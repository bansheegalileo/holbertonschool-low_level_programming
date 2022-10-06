#include "main.h"

/**
 * more_numbers - 0-14 x 10
 *
 * Return:0
 */

void more_numbers(void)
{
	int m;
	int n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
			_putchar('0' + n / 10);
			}
			_putchar('0' +  n % 10);

		}

	_putchar('\n');

	}
}

