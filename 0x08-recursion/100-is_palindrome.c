#include "main.h"

int _strlen_recursion(char *s);
int pl(char *s, int len);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: A pointer to the string to be checked.
 * Return: 1 if palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pl(s, len - 1));
}

/**
 * _strlen_recursion - get the length of a string.
 * @s: A pointer to the string.
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * pl - check palindrome string.
 * @s: A pointer to the string.
 * @len: position.
 * Return: 1 if palindrome and 0 if not.
 */

int pl(char *s, int len)
{
	if (len < 1)
		return (1);
	if (*s == *(s + 1))
		return (pl(s + 1, len - 2));
	return (0);
}
