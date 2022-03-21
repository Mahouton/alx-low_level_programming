#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 *
 */
void puts_half(char *str)
{
	int i = 0, n, length = 0;

	while (str[length])
		length++;

	if ((length % 2) == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;
	for (i = n; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
