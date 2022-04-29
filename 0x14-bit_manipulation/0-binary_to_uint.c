#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, mult = 1;
	int len;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
		;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		sum += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (sum);
}
