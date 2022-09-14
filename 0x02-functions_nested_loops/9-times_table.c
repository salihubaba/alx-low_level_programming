/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
#include "main.h"
void times_table(void)
{
	int c, d, p;

	for (c = 0; c <= 9; c++)
	{
		_putchar(48);
		for (d = 1; d <= 9; d++)
		{
			p = c * d;
			_putchar(44);
			_putchar(32);
			if (p <= 9)
			{
				_putchar(32);
				_putchar(p + 48);
			}
			else
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
