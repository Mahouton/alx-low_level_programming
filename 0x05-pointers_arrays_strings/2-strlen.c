#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The pointer  of a char
 *
 * Return: The length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length]; length++)
		;

	return (length);
}
