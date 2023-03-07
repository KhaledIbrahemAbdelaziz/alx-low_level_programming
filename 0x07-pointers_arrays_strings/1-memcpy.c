#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: The address that receive the copy.
 * @src: The address that contains the memory area to be copied.
 * @n: The number of bytes to be copied.
 * Return: A pointer dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int r = n;

	for (i = 0; i < r; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
