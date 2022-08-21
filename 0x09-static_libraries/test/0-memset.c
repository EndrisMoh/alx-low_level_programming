#include "main.h"

/**
 *_memset - function that fills memory with constant type.
 *@s: pointer of char type
 *@b: integer
 *@n: unsigned int n
 *Return: @s char value.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i <  n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
