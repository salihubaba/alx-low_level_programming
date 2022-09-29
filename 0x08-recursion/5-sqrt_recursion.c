#include "main.h"

/**
 * sqrt_op - calculate the square root of a number
 * @n: input number
 * @s: iterator
 * Return: square root or -1
 */
int sqrt_op(int n, int s)
{
	if (s % (n / s) == 0)
	{
		if (s * (n / s) == n)
			return (s);
		else
			return (-1);
	}
	return (0 + sqrt_op(n, s + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: -1 if ndoes not have a natural sqaure root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_op(n, 2));
}

