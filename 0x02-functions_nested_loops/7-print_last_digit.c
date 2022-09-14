/**
 * print_last_digit - prints the last digit of a number
 *
 * @c: input as a number
 *
 * Return: last digit
 */
#include "main.h"
int print_last_digit(int c)
{
	int l;

	l = c % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

