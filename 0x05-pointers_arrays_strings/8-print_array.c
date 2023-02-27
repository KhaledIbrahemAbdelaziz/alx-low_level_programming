#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: The pointer int
 * @n: The number of elements of the array to be printed
 * Return: nothing to return
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		if (*a != '\0')
			printf("%d, ", a[i]);
	}
	if (i == (n - 1))
		printf("%d", a[n - 1]);

	printf("\n");
}
