#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets bit to 0
 *
 * @n: ptr to bit
 *
 * @index: index to set val at
 *
 * Return: 1, -1 on err
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
