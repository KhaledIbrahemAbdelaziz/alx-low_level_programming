#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: The array.
 * @n: the number of elements of the array.
 * Return: nothing to return.
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
