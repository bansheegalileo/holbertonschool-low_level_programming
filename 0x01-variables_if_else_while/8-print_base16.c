#include<stdio.h>

/**
 * main - hexing this code
 *
 * Return: 0
 */

int main(void)
{
	char a = 'a';

	char q = '0';

	while (q <= '9')
	{
		putchar(q);
		q++;
	}

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
