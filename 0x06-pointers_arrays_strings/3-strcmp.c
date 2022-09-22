/**
 * _strcmp - compares two strings.
 * @s1: first input string
 * @s2: second input string
 * Return: 0, -ve or +ve integer
 */
#include "main.h"
int _strcmp(char *s1, char *s2)
{
	int i = 0, p = 0;

	while (p == 0)
	{
		if ((*(s1 + i) == '\0') && *((s2 + i) == '\0'))
			break;
		p = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (p);
}
