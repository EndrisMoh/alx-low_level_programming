#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm`
 * @array: pointer to first element of array to seach
 *         assume that array will be sorted in ascending order
 * @size: number of elements in array
 * @value: value to search for
 *         assume that value won’t appear more than once in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 * You must print the array being searched every time it changes.
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (x = low; x <= high; x++)
			printf("%i%s", array[x], x == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
