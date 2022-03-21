#include "main.h"

/**
 * puts2 - Prints every character of a string, starting with the
 * first character.
 * @str: The string containing characters
 *
 */
void puts2(char *str)
{
	int step, len = 0;

	while (str[len])
		len++;

	for (step = 0; step < len; step += 2)
	{
		_putchar(str[step]);
	}
	_putchar('\n');
}
