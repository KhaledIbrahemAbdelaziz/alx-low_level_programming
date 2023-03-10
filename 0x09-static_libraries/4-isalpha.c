#include "main.h"

/**
 * _isalpha - Checks if the input is character or not.
 * @c: The input.
 * Return: 1 if alpha or 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
