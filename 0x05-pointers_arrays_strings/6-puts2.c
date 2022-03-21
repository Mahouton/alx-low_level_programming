#include "main.h"

/**
 * puts2 - Prints every character of a string, starting with the
 * first character.
 * @str: The string containing characters
 *
 */
void puts2(char *str)
{
	int step;

	for (step = 0; str[step]; step++)
	{
		_putchar(str[step]);
		step++;
	}
	_putchar('\n');
}
