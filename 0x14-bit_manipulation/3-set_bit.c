#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at given index
 * @n: a pointer to the bit
 * @index: the index
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
