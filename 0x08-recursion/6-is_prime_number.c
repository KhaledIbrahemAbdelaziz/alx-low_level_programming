#include "main.h"

int check_number(int num, int test);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0.
 * @n: The number.
 * Return: 1 if the number is prime number and 0 otherwise.
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_number - check the number if prime or not.
 * @num: The number.
 * @test: iterator.
 * Return: 1 if prime and 0 if not.
 */

int check_number(int num, int test)
{
	if (num <= test)
		return (0);
	if ((num % test) == 0 && test > 1)
		return (0);
	if ((num / test) < test)
		return (1);
	return (check_number(num, test + 1));
}
