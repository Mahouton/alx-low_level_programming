#include "main.h"

/**
 * _strncat - Concatenates two strings, using most @n bytes from @src
 * @dest: The srting to be appended to upon
 * @src: the string to be apprnded to dest
 * @n: the number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len, i;

	for (src_len = 0, src[src_len], src_len++)
		;
	for (dest_len = 0; dest[dest_len]; dest_len++)
		;
	i = 1;
	while (i <= n)
	{
		dest[dest_len++] = *src++;
		i++;

		if (i > src_len)
			break;
	}

	return (dest);
}
