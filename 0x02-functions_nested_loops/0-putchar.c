#include "main.h"

/**
 * main - main
 *
 * Description: prints _putchar
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;

	char b;

	char c[] = "_putchar\n";

	while (a <= 8)
	{
		b = c[a];
		_putchar(b);
		a++;
	}

	return (0);
}
