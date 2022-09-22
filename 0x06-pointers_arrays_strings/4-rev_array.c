/**
 * reverse_array - reverses the content of an array of integers.
 * @a: input array of integers
 * @n: number of elements of the array
 */
#include "main.h"
void reverse_array(int *a, int n)
{
	int i, l, m;

	for (i = 0; i < n - 1; i++)
	{
		for (l = i + 1; l > 0; l--)
		{
			m = *(a + l);
			*(a + l) = *(a + (l - 1));
			*(a + (l - 1)) = m;
		}
	}
}
