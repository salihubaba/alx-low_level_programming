/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 for success
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
