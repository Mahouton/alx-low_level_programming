#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: the bit
 * @index: the index, starting from 0
 *
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
