#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The char pointer
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}
	return (len);
}
