#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: The char pointer to had the copy
 * @src: The char pointer to copy from it
 * Return: the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int len1, len2;

	len1 = 0;
	len2 = 0;
	while (*(src + len1) != '\0')
		len1++;

	for (; len2 < len1; len2++)
	{
		dest[len2] = src[len2];
	}

	dest[len1] = '\0';
	return (dest);
}
