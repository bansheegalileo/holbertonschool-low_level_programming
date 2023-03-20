#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - prints text to POSIX stdout
 *
 * @filename: ptr to filename
 *
 * @letters: letters to print
 *
 * Return: number of bytes func can print, 0 on fail or if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *bfr;

	if (filename == NULL)
		return (0);

	bfr = malloc(sizeof(char) * letters);
	if (bfr == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, bfr, letters);
	w = write(STDOUT_FILENO, bfr, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(bfr);
		return (0);
	}

	free(bfr);
	close(o);

	return (w);
}
