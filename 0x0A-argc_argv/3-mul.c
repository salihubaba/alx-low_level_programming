/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 for success
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}



