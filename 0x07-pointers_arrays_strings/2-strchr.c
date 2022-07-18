#include "main.h"
#include <string.h>

/**
 *_strchr - function that locates character in a string
 *@s: pointer to char type
 *@c: character
 *Return:  a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *pointer = strchr(s, (int) c);

	return (pointer);
}
