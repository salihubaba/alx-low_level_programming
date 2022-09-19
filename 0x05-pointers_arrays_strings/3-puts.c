/**
 * _puts - prints a string, followed by a new line
 *
 * @str: input string
 */
#include "main.h"
void _puts(char *str)
{
	int l = 0;

	while (l >= 0)
	{
		if (str[l] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[l]);
		l++;
	}
}
