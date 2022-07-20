#include "main.h"

int squarut_recursion(int n, int i);

/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: integer
 *Return: value ofsquare root, if n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squarut_recursion(n, 0));
}

/**
 *squarut_recursion - recurses the square root of a number
 *@n: number to calculate the sqaure root
 *@i: iterator
 * Return: the resulting square root
 */
int squarut_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squarut_recursion(n, i + 1));
}
