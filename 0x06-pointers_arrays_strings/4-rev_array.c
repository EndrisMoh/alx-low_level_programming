#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int i, j, rev;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = rev;
		}
	}
}
