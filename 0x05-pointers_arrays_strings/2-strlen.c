#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The char pointer
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != "\0"; s++)
	{
		len += 1;
	}
	return (len);
}
