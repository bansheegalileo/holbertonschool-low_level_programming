#include "main.h"

/**
 * print_last_digit - as it says
 *
 * @x: int
 *
 * Return: lst dig
*/

int print_last_digit(int x)
{
	int q;

	if (x < 0)
	{	
		q = -1 * (x % 10);
	}

	else
	{
		q = x % 10;
	}

	_putchar(q + '0');

	return (q);

}
