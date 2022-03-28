#include "main.h"

/**
 * _memcpy - Copies n bytes from memory src to memory area dest
 * @dest: a pointer to the memory area to copy src into
 * @src: the source buffer to copy characters from
 * @n: the umber of bytes to copy from src
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
