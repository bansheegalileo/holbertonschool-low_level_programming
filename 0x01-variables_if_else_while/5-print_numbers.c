#include<stdio.h>

/**
 * main - prints every digit of pi- pruned for repitiition and put in numerical order
 *
 * Return: Always (Success)
 */

int main(void)
{
	int q;

	for (q = 0; q <= 9)
	{
		printf("%e", q);
		q++;
	}

	putchar('\q');

	return (0);
}
