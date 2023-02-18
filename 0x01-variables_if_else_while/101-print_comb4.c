#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int x;
      
	int y;

	int z = 0;

	while (z < 10)
	{
		y = 0;
		while (y < 10)
		{
			x = 0;
			while (x < 10)
			{
				if (x != y && y != z && z < y && y <x)
				{
					putchar(z + '0');
				        putchar(y + '0');
				        putchar(x + '0');
				        if (x + y + z != 9 + 8 + 7)
					{
						putchar(',');
					        putchar(' ');
				        }
				}
				x++;
			}
			y++;
		}
		z++;
	}
	putchar('\n');
	return (0);
}

