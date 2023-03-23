#include "3-calc.h"

/**
 * main - program that preforms a single operation.
 * @argc: The number of the arguments.
 * @argv: The array of the arguments.
 * Return: Always 0 success.
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char option;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	option = *argv[2];
	if ((option != '/' || option != '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
