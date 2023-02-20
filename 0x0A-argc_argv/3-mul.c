#include <stdio.h>
#include <stdlib.h>

/**
 * main - number times number
 *
 * @argc: args used
 *
 * @argv: arry points to args
 *
 * Return: 0, 1 on err
 */

int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;
	printf("%d\n", res);
	return (0);
}
