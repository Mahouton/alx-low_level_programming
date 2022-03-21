#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The pointer 
 *
 */
void print_rev(char *s)
{
	int length = 0, i;

	while (*s++)
		length++;
	for (i = length - 1; i >= 0; i--)
		_puthar(s[i]);
	_putchar('\n');
}
