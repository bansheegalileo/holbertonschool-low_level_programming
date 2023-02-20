#include <stdio.h>

/**
 * main - prints number of args passed in
 *
 * @argc: args used
 *
 * @argv: arry points to args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
