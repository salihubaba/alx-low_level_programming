/**
 * _strncat - concatenates two strings.
 * @dest: first input string
 * @src: second input string
 * @n: amount of bytes used from src
 * Return: the pointer to dest.
 */
#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
	int m = 0, p = 0;

	while (*(dest + m) != '\0')
	{
		m++;
	}

	while (p < n)
	{
		*(dest + m) = *(src + p);
		if (*(src + p) == '\0')
		{
			break;
		}
		m++;
		p++;
	}
	return (dest);
}
