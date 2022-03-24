#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len;

	for (len = 0; dest[len]; len++)
		;
	while (*src != '\0')
		dest[len++] = *src++;

	return (dest);
}




