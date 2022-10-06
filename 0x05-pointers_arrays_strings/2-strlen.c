#include "main.h"

/**
 * _strlen - returns sting-leng
 *
 * @s: string param
 *
 * Return: length
*/

int _strlen(char *s)
{
	int q;

	for (q = 0; *s != '\0'; ++s)
		++q;

	return (q);
}
