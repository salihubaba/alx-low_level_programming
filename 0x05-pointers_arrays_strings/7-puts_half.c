/**
 * puts_half - print the second half of the string
 * @str: input string
 *
 */
#include "main.h"
void puts_half(char *str)
{
	int l = 0, i;

	while (l >= 0)
	{
		if (str[l] == '\0')
			break;
		l++;
	}
	if (l % 2 == 1)
		i = l / 2;
	else
		i = (l - 1) / 2;

	for (i++; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
