#include "main.h"

/**
 * print_alphabet_x10 - alphabet tin timez
 *
 * Return: 0
 */

void print_alphabet(void)
{
        char q;

	int z;

	while (z <= 10)
	{
        	for (q = 'a'; q <= 'z';)
        	{
               		_putchar(q);
               		q++;
        	}

        _putchar('\n');
	z++;

	}
}
