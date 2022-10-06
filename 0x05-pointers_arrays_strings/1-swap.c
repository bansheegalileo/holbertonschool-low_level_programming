#include "main.h"

/**
 * swap_int - pointer swapping
 *
 * @a:int
 *
 * @b:int
 *
 * Return:void
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
	return;

}
