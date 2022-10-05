#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char q;

	for (q = 'a'; q <= 'z')
	{
		_putchar(q);
		q++;
	}

	_putchar('\n');
}
