/**
 * cap_string - capitalizes all words of a string.
 * @a: input string.
 * Return: the string in capital letters
 */
#include "main.h"
char *cap_string(char *a)
{
	int c = 0, i;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(a + c) >= 97 && *(a + c) <= 122)
		*(a + c) = *(a + c) - 32;
	c++;
	while (*(a + c) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(a + c) == sep[i])
			{
				if ((*(a + (c + 1)) >= 97) && (*(a + (c + 1)) <= 122))
					*(a + (c + 1)) = *(a + (c + 1)) - 32;
				break;
			}
		}
	c++;
	}
	return (a);
}

