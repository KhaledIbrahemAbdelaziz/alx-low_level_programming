#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The number to git its factorial.
 * Return: The factorial of the given number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1 && n >= 0)
		return (1);
	else if (n == 2)
		return (2);
	else if (n > 2)
		return (n * factorial(n - 1));
}
