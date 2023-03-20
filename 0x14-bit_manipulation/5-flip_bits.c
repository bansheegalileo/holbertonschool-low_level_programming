#include <stdio.h>
#include "main.h"

/**
 * flip_bits - counts bits to flip
 *
 * @n: num
 *
 * @m: num to slip to
 *
 * Return: number of bits needed to flip n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m, b = 0;

	while (a > 0)
	{
		b += (a & 1);
		a >>= 1;
	}

	return (b);
}
