#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The bytes to concatonate.
 * Return: A pointer shall point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n > len2)
		n = len2;
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (0);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (; i < (n + len1); i++)
	{
		s[i] = s2[i - len1];
	}
	s[i] = '\0';
	return (s);
}
