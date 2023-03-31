#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints string before the main executed.
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
