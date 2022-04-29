#include "main.h"

/**
 * flip_bits - Count the number of bits to be flipped to get
 * from one number to another.
 * @n: the number
 * @m: the number to flip n to
 *
 * Return: the number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int X, bits = 0;

	X = n ^ m;
	while (X > 0)
	{
		bits += (X & 1);
		X >>= 1;
	}
	return (bits);
}
