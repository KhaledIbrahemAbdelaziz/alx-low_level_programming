#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int c = 0;
	int f_d;
	int l_d;

	int d;
	int f_d2;
	int l_d2;

	while (c <= 98)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');
		d = 0;
		while (d <= 99)
		{
			f_d2 = (d / 10 + '0');
			l_d2 = (d % 10 + '0');

			if (c < d)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d2);
				putchar(l_d2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
