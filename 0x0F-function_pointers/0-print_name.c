#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: Name to print.
 * @f: A pointer to the printing function.
 * Return: nothing to print.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
