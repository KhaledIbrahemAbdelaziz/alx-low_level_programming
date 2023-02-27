#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The char pointer for the string
 * Return: nothing to return
 */

void puts_half(char *str)
{
	int i, len1, len2;

	len1 = Strlen(str);
	if (len1 % 2 == 1)
		len2 = len1 / 2 + 1;
	else
		len2 = len1 / 2;

	for (i = len2; i < len1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
