#include "main.h"

/**
 *_strlen_recursion - function that returns  the lenght of a string
 *@s: pointer to char type
 *Return: Nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
