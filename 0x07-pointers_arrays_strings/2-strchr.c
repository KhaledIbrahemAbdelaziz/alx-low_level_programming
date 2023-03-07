#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be found.
 * Return: A pointer to the character or null.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
