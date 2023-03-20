#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets bit val to 1
 *
 * @n: ptr 2 bit
 *
 * @index: index to set val at
 *
 * Return: 1, -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
