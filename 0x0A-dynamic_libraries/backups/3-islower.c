#include "main.h"

/**
 * _islower - is it lower?
 *
 * @c: char
 *
 * Return: 1 if lower, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
