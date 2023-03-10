#include "main.h"

/**
 * _isupper - Checks if the string is contained uppercase letters.
 * @c: character to check.
 * Return: 1 is upper and 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
