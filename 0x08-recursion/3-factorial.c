/**
 * factorial - returns the factorial of a given number.
 * @n: input number
 * Return: return -1 to indicate an error
 * If n is lower than 0
 */
#include "main.h"
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
