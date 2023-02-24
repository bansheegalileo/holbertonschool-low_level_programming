#include "main.h"

/**
 * _abs - abs check
 *
 * @x: int
 *
 * Return: conditional
 */

int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (x = x * -1);
	}
	else

		return (0);
}
