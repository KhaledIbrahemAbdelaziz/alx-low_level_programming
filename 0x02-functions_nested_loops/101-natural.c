#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3 and 5 up to 1024
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, sum = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
