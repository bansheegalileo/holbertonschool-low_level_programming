#include <stdlib.h>

/**
 * array_range - creates an arr of ints min to max
 *
 * @min: min val to include
 *
 * @max: max val to include
 *
 * Return: ptr to newly arr, NULL on fail
 */

int *array_range(int min, int max)
{
	int *arr, a;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (a = 0; a <= max - min; a++)
		arr[a] = min + a;
    return (arr);
}
