/**
 * leet - encodes a string into 1337
 * @a: input string
 * Return: a string
 */
#include "main.h"
char *leet(char *a)
{
	int c = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(a + c) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(a + c) == low_letters[i] || *(a + c) == upp_letters[i])
			{
				*(a + c) = numbers[i];
				break;
			}
		}
		c++;
	}
	return (a);
}

