#include"main.h"

/**
 * jack_bauer- each minute of jb
 *
 * Return: conditional
*/

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23;)
	{
		for (m = 0; m <= 59;)
		{
			_putchar((h / 10) + 0);
			_putchar((h % 10) + 0);
			_putchar(':');
			_putchar((m / 10) + 0);
			_putchar((m % 10) + 0);
			m++;
		}

		h++;
		_putchar('\n');
	}
}
