#include "main.h"

/**
 * _strcpy - src2dst
 *
 * @dest:chr
 *
 * @src:chr
 *
 * Return:chr
 */

char *_strcpy(char *dest, char *src)
{
int q;

q = 0;
	while (src[q])
	{
		dest[q] = src[q];
		q++;
	}
dest[q] = '\0';
return (dest);
}
