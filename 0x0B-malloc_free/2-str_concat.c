#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concats 2 strs
 *
 * @s1: 1st str 2 concat
 *
 * @s2: 2nd str 2 concat
 *
 * Return: concat fail - NULL
 * Otherwise - ptr to new space w/ concat'd strs
 */


char *str_concat(char *s1, char *s2)
{
	char *cnct;
	int s1_l = 0, s2_l = 0, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + s1_l))
		s1_l++;
	while (*(s2 + s2_l))
		s2_l++;
	cnct = malloc(sizeof(char) * (s1_l + s2_l + 1));
	if (cnct == NULL)
		return (NULL);
	for (a = 0; a < s1_l; a++)
		*(cnct + a) = *(s1 + a);
	for (b = 0; b < s2_l; b++)
		*(cnct + (a + b)) = *(s2 + b);
	*(cnct + (a + b)) = '\0';
	return (cnct);
}
