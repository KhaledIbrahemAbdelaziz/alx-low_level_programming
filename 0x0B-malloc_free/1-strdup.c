#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: The pointer to the string.
 * Return: pointer to the copied string in new allocated memory.
 */

char *_strdup(char *str)
{
	int i, j;
	char *a;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));
	for (j = 0; str[j]; j++)
		a[j] = str[j];
	return (a);
}
