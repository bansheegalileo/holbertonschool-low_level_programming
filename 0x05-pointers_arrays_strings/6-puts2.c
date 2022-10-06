#include "main.h"

/**
 * puts2 - the whole thing
 *
 * @str: s.p.i.
 *
 * Return: 0
*/

void puts2(char *str)
{
	int q;

	for (q = 0; str[q] != '\0'; ++q)
	{
		if (q % 2 == 0)
			_putchar(str[q]);
	}
	_putchar('\n');
}

