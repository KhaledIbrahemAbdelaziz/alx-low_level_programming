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
	x = 0;
	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
