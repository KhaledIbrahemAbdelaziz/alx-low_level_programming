#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: The lowercase input string.
 * Return: The output uppercase string.
 */

char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
