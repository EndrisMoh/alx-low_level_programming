#include "main.h"
#include <string.h>

/**
 * _strspn - function that get the length of a prefix substring
 *@s: pointer of char type
 *@accept: pointer of character type
 *Return: Returns the number of bytes in the initial segment of s 
 *which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int numbyt = strspn(s, accept);

	return (numbyt);
}
