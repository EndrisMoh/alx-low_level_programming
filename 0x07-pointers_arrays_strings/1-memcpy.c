#include "main.h"
#include <string.h>

void *memcpy(void *dest, const void *src, size_t n);
/**
 *_memcpy - function that copies memory area
 *@dest: pointer to char tyep
 *@src: integer
 *@n: unsigned int n
 *Return: @s char value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	void *p =  dest;

	memcpy(p, (char *)src, n);
	return (dest);
}
