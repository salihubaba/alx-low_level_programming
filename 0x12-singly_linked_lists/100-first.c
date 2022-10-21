#include <stdio.h>

/**
 * pmain - execute before main
 */
void __attribute__((constructor)) pmain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
