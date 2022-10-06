#include "main.h"

/**
 * print_alphabet_x10 - alphabittintimez
 *
 * Description: using _putchar
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int b;

	for (b = 1; b <= 10;)
	{
		for (c = 'a'; c <= 'z';)
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		c++;

	}
}
