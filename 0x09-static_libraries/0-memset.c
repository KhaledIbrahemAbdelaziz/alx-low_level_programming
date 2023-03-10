#include "main.h"

/**
 * _memset - Fills a memory area with a specific value.
 * @s: The starting address of memory area to be filled.
 * @b: The specific value.
 * @n: The number of bytes to be changed.
 * Return: The changed value .
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
