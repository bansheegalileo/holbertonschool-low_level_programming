#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - from n to 98
 *
 *@n: int
 *
 * Return : various
 */

void print_to_98(int n)
{
	int q;

	if (n > 98)
	{
		for (q = n; q > 98; --q)
	
		printf("%d, ", q);
	}
	
	else
	{
		for (q = n; q < 98; ++q)
			printf("%d, ", q);
	}

	printf("98\n");
