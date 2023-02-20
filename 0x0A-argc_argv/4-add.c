#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds pos numbs
 *
 * @argc: args used
 *
 * @argv: arry points to args
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
