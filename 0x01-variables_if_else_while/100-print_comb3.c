#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int x;

	int y = 0;

	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			if (y != x && y < x)
			{
				putchar(y + '0');
				putchar(x + '0');

				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
