#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: The buffer that will receive the src string as copied.
 * @src: The string that will be copied in dest butter.
 * @n: The n-bytes that will be copied from the src string to dest buffer.
 * Return: The dest copied string from src string.
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
	}
	return (dest);
}
