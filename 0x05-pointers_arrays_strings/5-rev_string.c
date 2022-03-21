#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 */
void rev_string(char *s)
{
	int i = 0, length, half;
	char tmp;

	for (length = 0; s[length] != '\0'; length++)
		;
	half = length / 2;

	while (half--)
	{
		tmp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}
