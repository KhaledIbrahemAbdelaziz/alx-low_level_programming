#include "main.h"

/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: The number 1.
 * @m: The number 2.
 * Return: the number of bits
 * you would need to flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m, bits = 0;

	while (num > 0)
	{
		bits = bits + (num & 1);
		num = num >> 1;
	}
	return (bits);
}
