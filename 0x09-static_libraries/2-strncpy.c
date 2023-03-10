#include "main.h"

/**
 * _strcpy - copy a string.
 * @dest: The buffer.
 * @src: The string.
 * @n: Number of bytes to copy.
 * Return: The buffer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
