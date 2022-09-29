/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: nput integer
 * @y: input integer
 *
 * Return: return -1 If y is lower than 0
 */
#include "main.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
