#include "main.h"

/**
* _isdigit - is it digi>
*
* @c: int
*
* Return: condit
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
