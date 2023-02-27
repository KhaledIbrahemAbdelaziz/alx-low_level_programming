#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: The char pointer for the string
 * Return: nothing to return
 */

void rev_string(char *s)
{
	int len;

	len = _strlen(s);
	while (s[len - 1] != '\0')
	{
		_putchar(s[len - 1]);
		len--;
	}
}
