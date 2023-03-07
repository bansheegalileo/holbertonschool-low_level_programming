#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variable number of integers to print.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		int digits = 0;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		if (num == 0)
		{
			_putchar('0');
		}
		else
		{
			while (num > 0)
			{
				int digit = num % 10;
				num /= 10;
				_putchar(digit + '0');
				digits++;
			}

			while (digits > 0)
			{
				digits--;
				_putchar(' ');
			}
		}

		if (i < n - 1 && separator != NULL)
		{
		while (*separator != '\0')
			{
				_putchar(*separator);
				separator++;
			}
		}
	}

	_putchar('\n');

	va_end(args);
}
