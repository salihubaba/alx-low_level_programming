/**
 * _memset - fills memory with a constant byte.
 * @s: input memory area
 * @b: constant byte
 * @n: bytes of the memory area
 *
 * Return: the pointer to s
 */
#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
