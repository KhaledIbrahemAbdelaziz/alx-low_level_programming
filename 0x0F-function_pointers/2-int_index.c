#include "function-pointers.h"

/**
 * int_index - searches for an integer.
 * @array: The array.
 * @size: The size of the array.
 * @cmp: A pointer to the comparing function.
 * Return: A pointer to the first appear of the integer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
