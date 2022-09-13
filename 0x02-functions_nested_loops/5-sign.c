/**
 * print_sign - Determines if the input number
 * is greater, less or equal to 0
 *
 * @n: The input number as an integer
 *
 * Return: 1,0,and -1
 */
#include "main.h"
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

