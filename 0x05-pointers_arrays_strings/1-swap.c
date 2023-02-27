#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The first integer pointer
 * @b: The second integer pointer
 * Return: nothing to return
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
