#include <stdio.h>
/**
 * main - Prints the sum of all even valued fibonacci numbers doesn't excceded 4,000,000
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k = k + j;
		if (k % 2 == 0)
		{
			sum = sum + k;
		}
		j = k - j;
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
