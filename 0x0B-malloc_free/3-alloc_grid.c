#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns ptr 2 2D arr of ints
 *
 * @width: width of arr
 *
 * @height: height of arr
 *
 * Return: ptr 2 2D arr
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(width * sizeof(int));
		if (arr[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(arr[b]);
			free(arr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			arr[a][b] = 0;
	}
	return (arr);
}
