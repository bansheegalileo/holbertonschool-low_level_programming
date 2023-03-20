#include "main.h"

/**
 * main - copies from one to another
 *
 * @argc: The number of arguments supplied to the program.
 *
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, c, d;
	char *bfr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bfr = aloc_bfr(argv[2]);
	a = open(argv[1], O_RDONLY);
	c = read(a, bfr, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (a == -1 || c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(bfr);
			exit(98);
		}

		d = write(b, bfr, c);
		if (b == -1 || d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			free(bfr);
			exit(99);
		}

		c = read(a, bfr, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);

	} while (c > 0);

	free(bfr);
	cl_fil(a);
	cl_fil(b);

	return (0);
}
