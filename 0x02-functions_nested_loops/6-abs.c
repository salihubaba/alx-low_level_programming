/**
 * _abs - computes the absolute value of an integer
 *
 * @c: input as an integer
 *
 * Return: integer
 */
#include "main.h"
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}

