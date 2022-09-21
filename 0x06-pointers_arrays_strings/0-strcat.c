/**
 * _strcat - concatenates two strings.
 * @dest: firstinput strng
 * @src: second input string
 * Return: pointer to the resulting string dest
 */
#include "main.h"
char *_strcat(char *dest, char *src)
{
	int n = 0, p = 0;

	while (*(dest + n) != '\0')
	{
		n++;
	}

	while (p >= 0)
	{
		*(dest + n) = *(src + p);
		if (*(src + p) == '\0')
		{
			break;
		}
		n++;
		p++;
	}
	return (dest);
}
