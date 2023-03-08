#include "main.h"

int _sqrt(int num, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number.
 * Return: The square root of the number.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - get the square root.
 * @num: The number.
 * @root: The root of the number.
 * Return: A square root of the number.
 */

int _sqrt(int num, int root)
{
	int result = root * root;

	if (result > num)
		return (-1);
	else if (result == num)
		return (root);
	return (_sqrt(num, root + 1));
}
