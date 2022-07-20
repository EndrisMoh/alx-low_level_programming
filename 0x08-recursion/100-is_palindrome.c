#include "main.h"

/**
 * strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recursion(s + 1));
}

/**
 * str_compare - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */

int str_compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + str_compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (str_compare(s, 0, strlen_recursion(s) - 1));
}
