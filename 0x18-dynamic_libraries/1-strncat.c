#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: Input string that will append in it the src string.
 * @src: Input string that will be appended to the dest string.
 * @n: The n-byte from src string to be appended in dest string.
 * Return:  a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
