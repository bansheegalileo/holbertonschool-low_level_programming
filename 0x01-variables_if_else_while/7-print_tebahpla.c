#include<stdio.h>

/**
 * main - as if a gerbil ran the keyboard
 *
 * Return: 0
 */

int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}

	putchar('\n');

	return (0);
}
