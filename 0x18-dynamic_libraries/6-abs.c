#include "main.h"
/**
 * _abs - Calculates the absolute value of the number
 * @c: The number to be computed
 * Return: Absolute value of the number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int n;

		n = c * -1;
		return (n);
	}
	return (c);
}
