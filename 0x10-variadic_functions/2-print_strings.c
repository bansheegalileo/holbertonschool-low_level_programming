#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: Variable number of strings to print.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *str;

    va_start(args, n);

     for (i = 0; i < n; i++)
    {
        str = va_arg(args, char *);

        if (str == NULL)
        {
            str = "(nil)";
        }

        while (*str)
        {
            _putchar(*str);
            str++;
        }

        if (i != n - 1 && separator != NULL)
        {
            while (*separator)
            {
                _putchar(*separator);
                separator++;
            }
        }
    }

    _putchar('\n');

    va_end(args);
}
