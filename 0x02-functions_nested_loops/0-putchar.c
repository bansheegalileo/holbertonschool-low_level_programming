#includ "main.h"

/**
 * Main - prints _putchar
 *
 * Return: 0
 */

int main(void)
{
	char a[] = "_putchar";
	int b;

	while (b <= 8)
	{
		_putchar(a[b]);
		b++;
	}

	_putchar('\n');

	return (0);
}
