#include "main.h"

/**
 *_puts - function that prints a string, followed by a new line, to stdout.
 *@s: pointer Dereferencing at string.
 *Return : @s
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
