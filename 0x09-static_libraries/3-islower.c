#include "main.h"

/**
 * _islower - Checks the lowercase letters.
 * @c: The character.
 * Return: 1 if lowercase or 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
