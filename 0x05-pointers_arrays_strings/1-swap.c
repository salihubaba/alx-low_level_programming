/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 */
#include "main.h"
void swap_int(int *a, int *b)
{
	int *c = *a;
	*a = *b;
	*b = c;
}
