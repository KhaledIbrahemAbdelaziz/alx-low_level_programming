#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	char c;

	int x;

	c = 'a';
	while (x < 10)
		putchar(x + '0');
	while (c <= 'f')
		putchar(c);
	putchar('\n');
	return (0);
}
