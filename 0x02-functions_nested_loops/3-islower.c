/**
 * _islower - fuction to check if lowercase
 * @c: The character in ASCII code
 *
 *
 * Return: 0 and 1
 */
#include "main.h"
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
