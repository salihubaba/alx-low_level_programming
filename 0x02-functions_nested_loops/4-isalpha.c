/**
 * _isalpha - determines if the input is an alphabet
 * @c: The character in ASCII code
 *
 * Return: 1 and 0
 */
#include "main.h"
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
