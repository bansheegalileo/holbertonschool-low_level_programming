#include<stdio.h>

/**
 * main - single digs
 *
 * Return: 0
 */

int main(void)
{
	int q = '0';

	while (q <= '9')
	{
		putchar(q);
		if (q < '9')
		{
			putchar(',');
			putchar(' ');
		}

		q++;

	}

	putchar('\n');

	return (0);
}
