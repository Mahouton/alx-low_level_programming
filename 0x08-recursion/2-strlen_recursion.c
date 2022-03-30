#include "main.h"

/**
 * _strlen_recursion - Return the length of a string
 * @s: the string whose length will be returned
 *
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
