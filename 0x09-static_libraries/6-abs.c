#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: The number.
 * Return: the absolute value of the number.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-1 * n);
}
