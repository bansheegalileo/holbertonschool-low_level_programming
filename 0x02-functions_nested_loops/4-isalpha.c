#include "main.h"

/**
 * _isalpha - is it alphabet?
 * 
 *@c: char
 *
 * Return: 1 if true, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
