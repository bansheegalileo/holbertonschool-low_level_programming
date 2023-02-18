#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int is_div(int n, int dv);

	if (n < 2)
		return (0);
	else
		return (is_div(n, 2));
}

/**
 * is_div - checks if n is divisible by a number between 2 and dv
 *
 * @n: base number
 *
 * @dv: the current divisor to check
 *
 * Return: 1 if divisible, 0 otherwise
 */

int is_div(int n, int dv)
{
	if (n % dv == 0)
		return (0);
	else if (dv * dv > n)
		return (1);
	else
		return (is_div(n, dv + 1));
}
