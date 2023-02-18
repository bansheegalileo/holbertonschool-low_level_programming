#include "main.h"
int _subsqrt(int n, long st, long ed);

/**
 * _sqrt_recursion - calQl8s square root of n
 *
 * @n: base number
 *
 * Return: square root of n or -1 if it doesn't have one
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_subsqrt(n, 1, n));
}

/**
 * _subsqrt - calQl8s sqrt between start and end
 *
 * @n: as above
 *
 * @st: start of range
 *
 * @ed: end of range
 *
 * Return: natural square root of n between st and ed, or -1 
 */

int _subsqrt(int n, long st, long ed)
{
	long md = (st + ed) / 2;

	if (st > ed)
		return (-1);
	if (md * md == n)
		return (md);
	else if (md * md < n)
		return (_subsqrt(n, md + 1, ed));
	else
		return (_subsqrt(n, st, md - 1));
}