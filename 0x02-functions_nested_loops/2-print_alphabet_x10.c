/**
 * print_alphabet_x10 - prints a-z in 10 places
 *
 * Return: void
 */
#include "main.h"
void print_alphabet_x10(void)
{
	char a, b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
