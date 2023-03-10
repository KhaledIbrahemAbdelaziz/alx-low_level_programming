#include "main.h"

/**
 * _strlen - Returns the length of the string.
 * @s: The string.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
