#include "main.h"

/**
 * is_prime_number - is it prime?
 *
 * is_div - is it divisible by a number between 2 and dv?
 *
 * @n: base number
 *
 * @dv: the current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
    int is_div(int n, int dv);

    if (n < 2)
        return (0);
    else
        return (is_div(n, 2));
}

int is_div(int n, int dv)
{
    if (n % dv == 0)
        return (0);
    else if (dv * dv > n)
        return (1);
    else
        return (is_div(n, dv + 1));
}
