#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 */
void rev_string(char *s)
{
	int i = 0, length = 0;
	char tmp;

	while (s[i])
		length++;
	while ((length / 2)--)
	{
		tmp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = tmp;
	}
}
