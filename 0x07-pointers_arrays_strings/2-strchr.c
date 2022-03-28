#include "main.h"

/**
 * _strchr - Locates a charater in a string.
 * @s: the string to be searched
 * @c: the charater to be located
 *
 * Return: a pointer to the first occurence(if c if found),
 * NULL(if c is not found).
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
