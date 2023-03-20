#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets bit val at given index
 *
 * @n: bit
 *
 * @index: index
 *
 * Return: bit val at index, -1 on fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
