/**
 * main -entry point
 *
 * Return: 0
 */
#include<stdio.h>
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}