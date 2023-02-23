#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the largest prime factor for 612852475143
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long num = 612852475143, div;

	while (div < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num = num / 2;
			continue;
		}
		for (div = 3; div < (num / 2); div += 2)
		{
			if ((num % div) == 0)
				num = num / div;
		}
	}
	printf("%ld\n", num);
	return (0);
}
