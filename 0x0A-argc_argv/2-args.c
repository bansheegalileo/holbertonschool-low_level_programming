#include <stdio.h>

/**
 * main - prints args recieved including 0
 *
 * @argc: args used
 *
 * @argv: arry points to args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
