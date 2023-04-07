#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: A pointer pointing to a string of 0 and 1 chars
 * Return: the converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = (b[i] - '0') + 2 * num;
		i++;
	}
	return (num);
}
