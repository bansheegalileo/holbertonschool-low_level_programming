#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concats 2 strs
 *
 * @s1: 1st str
 *
 * @s2: 2nd str
 *
 * @n: bytes from s2 to concat
 *
 * Return: ptr to new str or NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int l1 = 0, l2 = 0, a = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		n = l2;

	res = malloc(sizeof(char) * (l1 + n + 1));

	if (res == NULL)
		return (NULL);

	for (a = 0; a < l1; a++)
		res[a] = s1[a];

	for (a = 0; a < n; a++)
		res[a + l1] = s2[a];

	res[l1 + n] = '\0';

	return (res);
}
