#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: the string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
		_ptuchar('\n');
}
