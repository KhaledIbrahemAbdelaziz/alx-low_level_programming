#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: The char point of the string
 * Return: nothing to return
 */

void puts2(char *str)
{
	int len, i;

	len = Strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
