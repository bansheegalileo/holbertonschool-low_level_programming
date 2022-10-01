#include <stdio.h>

/**
 * main - It does the thing
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	c = 'a';

	while (c <= 'z'; c++)

		putchar(c);
	

	c = 'A';

	while (c <= 'Z'; c++)

		putchar(c);

	putchar('\n');

	return (0);
}
