/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always return nothing
 */
#include "main.h"
void print_alphabet(void)
{
	char ch;

	for(ch = 'a' ; ch <= 'z' ;ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
