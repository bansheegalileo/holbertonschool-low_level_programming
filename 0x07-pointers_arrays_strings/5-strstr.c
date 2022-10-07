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
	int q;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		q = 0;

		if (haystack[q] == needle[q])
		{
			do {
				if (needle[q + 1] == '\0')
					return (haystack);

				++q;

			} while (haystack[q] == needle[q]);
		}

		++haystack;
	}

	return ('\0');
}
