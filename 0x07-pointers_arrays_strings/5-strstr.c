#0include "main.h"

/**
 * _strstr - locate substr
 *
 * @haystack: input
 *
 * @needle: goal
 *
 * Return: pointer or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == *needle)
		{
			++haystack;
			++needle;
		}
		if (!*needle)
			return (haystack);
		++haystack;
	}
	return ('\0');
}
