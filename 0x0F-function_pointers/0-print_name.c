#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input naem
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
