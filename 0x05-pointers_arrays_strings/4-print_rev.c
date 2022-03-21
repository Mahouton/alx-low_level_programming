#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The pointer
 *
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index])
		index++;
	while (index--)
		_putchar(s[index]);
	_putchar('\n');
}
