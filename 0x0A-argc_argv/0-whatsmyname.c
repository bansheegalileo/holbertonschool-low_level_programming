#include <stdio.h>
#include "main.h"

/**
 * main - prints name + \n
 *
 * @argc: args used
 *
 * @argv: arry points to args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return 0;
}
