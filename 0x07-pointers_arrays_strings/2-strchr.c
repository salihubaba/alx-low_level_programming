/**
 * _strchr - locates a character in a string.
 *
 * @s: stirng
 * @c: character
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
#include "main.h"
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
		else
			return ('\0');
	}
