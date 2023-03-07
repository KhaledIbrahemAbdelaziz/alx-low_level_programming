#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The pointer to the string.
 * @accept: The set of bytes to be searched for.
 * Return: A pointer to the set of bytes or null.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
