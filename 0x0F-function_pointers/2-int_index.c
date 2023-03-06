#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: A pointer to the array to search.
 * @size: The number of elements in the array.
 * @cmp: A function pointer to the comparison function.
 *
 * Return: The index of the first element for which the comparison function
 * does not return 0, or -1 if no element matches.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
