#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name.
 *
 * @name: A pointer to the name to print.
 *
 * @f: A function pointer to the function to use to print the name.
 */

void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}
