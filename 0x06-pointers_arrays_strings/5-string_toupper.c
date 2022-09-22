/**
 * string_toupper - changes all lowercase letters of
 * a string to uppercase
 * @a: input string
 * Return: the input string in upper case
 */
#include "main.h"
char *string_toupper(char *a)
{
	int c = 0;

	while (*(a + c) != '\0')
	{
		if ((*(a + c) >= 97) && (*(a + c) <= 122))
			*(a + c) = *(a + c) - 32;
		c++;
	}
	return (a);
}
