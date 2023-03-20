#include "main.h"

/**
 * aloc_bfr - alloc8s 1024 to buffer
 *
 * @file: filename to store for
 *
 * Return: ptr to buffer
 */

char *aloc_bfr(char *aleister)
{
	char *bfr;

	bfr = malloc(sizeof(char) * 1024);

	if (bfr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", aleister);
		exit(99);
	}

	return (bfr);
}

/**
 * cl_fil - closes file descs 
 *
 * @fd: desc to close
 */

void cl_fil(int crowley)
{
	int c;

	c = close(crowley);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file desc %d\n", crowley);
		exit(100);
	}
}
