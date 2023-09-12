#include "search_algos.h"

void print_array(int *array, int size);

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: index of element or -1 if not exists.
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int last = size - 1;
	int mid;

	if (array == NULL || size == 0)
		return (-1);
	while (start <= last)
	{
		mid = (start + last) / 2;
		print_array(&array[start], (last - start) + 1);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			last = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}

/**
 * print_array - print the comparing array.
 * @array: The elements in array that is compared.
 * @size: the size of the array.
 * Return: nothing to return.
 */
void print_array(int *array, int size)
{
	int i;

	if (array == NULL || size == 0)
		return;
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}
