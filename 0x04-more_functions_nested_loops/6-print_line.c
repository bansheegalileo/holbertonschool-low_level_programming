#include "main.h"

/**
 * print_line - str8line
 *
 * @n: printings
 *
 * Return: Line!
*/

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
