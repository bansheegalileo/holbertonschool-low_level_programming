#include"main.h"

/**
 * _isupper - is it upper?
 *
 * @c: char
 *
 * Return: 1 if upper, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
