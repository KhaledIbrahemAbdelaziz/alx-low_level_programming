#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: The minimum number in the array (bounds).
 * @max: The maximum number in the array (bounds).
 * Return: The pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (0);
	while (i <= (max - min))
		arr[i++] = t++;
	return (arr);
}
