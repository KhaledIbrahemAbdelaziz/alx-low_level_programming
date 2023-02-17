#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int x;

	for(x = 0; x < 10; x++)
		putchar((char)x);
	putchar('\n');
	return (0);
}
