/**
 * _strncpy - copies a string
 * @dest: first input string
 * @src: second input string
 * @n: amount of bytes to be copied from src
 * Return: the pointer to dest
 */
#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i >= 0)
	{
		if (*(src + i) == '\0')
		{
			break;
		}
		dest[i] = src[i];
		i++;
	}
}

