#include "main.h"

/**
 * _strcpy - Copies the string pointed to by @src, including the
 * terminating null byte(\0), to the buffer pointed to by @dest
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
