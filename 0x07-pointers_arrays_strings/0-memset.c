#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: The starting address of memory to be filled.
 * @b: The constant bytes to be filled.
 * @n: The number of bytes to be changed.
 * Return: A pointer to the address of memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
